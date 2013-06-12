#include "qtavrcpbindingtestapp.h"
#define DEBUGBTPLAYER

int loadpulsemodule()
{
    FILE *fp =NULL;
    int moduleid;
    char *command = "pactl load-module module-loopback source=bluez_source.18_87_96_69_BD_A8 sink=0";
    char *output = (char*)malloc(sizeof(char)*11);
#ifdef DEBUGBTPLAYER
    qDebug()<<" command to be executed " <<command;
#endif
    fp = popen(command,"r");
    if(NULL != fp)
    {
        if(fgets(output,10,fp)!=NULL)
        {
#ifdef DEBUGBTPLAYER
           qDebug()<<"moduleid of pulse module just loaded "<< atoi(output);
#endif
           moduleid = atoi((const char*)output);
           if(moduleid>0)
           {
               return moduleid;
           }
           else
           {
              return -1;
           }    
        }
        else
        {
           return -1;
        }
    }
    else
    {
        return -1;
    }
}


int unloadpulsemodule(int moduleid)
{
    FILE *fp =NULL;
    QString formcommand = QString("pactl unload-module ") + QString("").setNum(moduleid); 
#ifdef DEBUGBTPLAYER
    qDebug()<<" command to be executed " <<formcommand;
#endif
    fp = popen(formcommand.toAscii().data() ,"r");
    if(NULL != fp)
    {
#ifdef DEBUGBTPLAYER
           qDebug()<<"module id unloaded  "<< moduleid;
#endif
    }
    else
    {
        return -1;
    }
}



int pidofbluetooth()
{
    FILE *fp =NULL;
    int pid;
    char *command = "pidof bluetoothd";
    char *output = (char*)malloc(sizeof(char)*11);
#ifdef DEBUGBTPLAYER
    qDebug()<<" command to be executed " <<command;
#endif
    fp = popen(command,"r");
    if(NULL != fp)
    {
        if(fgets(output,10,fp)!=NULL)
        {
#ifdef DEBUGBTPLAYER
           qDebug()<<"pidof bluetoothd "<< atoi(output);
#endif
           pid = atoi((const char*)output);
           if(pid>0)
           {
               return pid;
           }
           else
           {
              return -1;
           }    
        }
        else
        {
           return -1;
        }
    }
    else
    {
        return -1;
    }
}
QtAvrcpBindingTestApp::QtAvrcpBindingTestApp(QWidget *parent) :
    QWidget(parent)
{
    int pidofbtd = pidofbluetooth();
     if(pidofbtd <= 0)
     {
#ifdef DEBUGBTPLAYER
        qDebug()<<"Bluetooth deamon is not running. Please check your bluetooth service";
#endif
        exit(-1);
     }
     QString pidstring="";
     pidstring.setNum(pidofbtd);
#ifdef DEBUGBTPLAYER
     qDebug()<<"pidstring formed : "<<pidofbtd;
#endif
     QString objpath = QString("/org/bluez/")+ pidstring +QString("/hci0/dev_18_87_96_69_BD_A8");
#ifdef DEBUGBTPLAYER
     qDebug()<<"object path formed : "<<objpath;
#endif
    //Hard coding the blue tooth address for testing purpose
    //QString &service, const QString &path, const QDBusConnection &connection,
    
    m_avrcpbinding = new OrgBluezControlInterface("org.bluez",objpath,QDBusConnection::systemBus());
    m_audiosource = new OrgBluezAudioSourceInterface("org.bluez",objpath,QDBusConnection::systemBus());
    m_gnome_setinterface = new OrgGnomeSettingsDaemonMediaKeysInterface ("org.gnome.SettingsDaemon","/org/gnome/SettingsDaemon/MediaKeys",QDBusConnection::sessionBus());
    isconnected = false;
    m_moduleid = 0;
    m_toptoolbar = new QToolBar();
    m_bottomtoolbar = new QToolBar();
    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(QImage()));
    //this->setPalette(palette);

    m_connectaction = new QAction(QIcon(":images/btdisconnect.png"),"Connect",m_toptoolbar);
    m_toptoolbar->addAction(m_connectaction);
    m_prevaction = new QAction(QIcon(":images/previous.png"),"Previous",m_bottomtoolbar);
    m_playpauseaction = new QAction(QIcon(":images/play.png"),"Play",m_bottomtoolbar);
    m_nextaction = new QAction(QIcon(":images/next.png"),"Next",m_bottomtoolbar);
    m_stopaction = new QAction(QIcon(":images/stop.png"),"Stop",m_bottomtoolbar);
    m_mainlayout = new QVBoxLayout();
    m_bottomhboxlayout = new QHBoxLayout();
    m_tophboxlayout = new QHBoxLayout();


    m_tophboxlayout->addSpacing(150);
    m_tophboxlayout->addWidget(m_toptoolbar);
    m_bottomtoolbar->addAction(m_prevaction);
    m_bottomtoolbar->addAction(m_playpauseaction);
    m_bottomtoolbar->addAction(m_nextaction);
    m_bottomtoolbar->addAction(m_stopaction);
    m_bottomhboxlayout->addWidget(m_bottomtoolbar);
    m_mainlayout->addLayout(m_tophboxlayout);
    m_mainlayout->addLayout(m_bottomhboxlayout);


    QDBusReply<bool> reply = m_avrcpbinding->IsConnected();
    
    if (reply.isValid())
    {
        isconnected = reply.value();
        qDebug()<<"Got Reply from btdaemon : "<<reply.value();

        if(!isconnected)
        {
            m_audiosource->Connect();
        
        }
        else
        {
            m_connectaction->setIcon(QIcon(":images/btconnected.png"));
            m_gnome_setinterface->GrabMediaPlayerKeys("btplayer",0);
        }
    }    
    setLayout(m_mainlayout);

    //connect the action clicks to the slots
    connect(m_prevaction,SIGNAL(triggered()),this,SLOT(prevSlot()));
    connect(m_playpauseaction,SIGNAL(triggered()),this,SLOT(playSlot()));
    connect(m_nextaction,SIGNAL(triggered()),this,SLOT(nextSlot()));
    connect(m_stopaction,SIGNAL(triggered()),this,SLOT(stopSlot()));
    connect(m_connectaction,SIGNAL(triggered()),this,SLOT(connectSlot()));
    //connect(m_avrcpbinding,SIGNAL(Connected()),this,SLOT(btDeamonConnectedSlot()));
    connect(m_avrcpbinding,SIGNAL(PropertyChanged(const QString &, const QDBusVariant &)),this,SLOT(btDeamonConnectionStatusSlot(const QString &, const QDBusVariant &)));
    connect(m_gnome_setinterface,SIGNAL(MediaPlayerKeyPressed(QString,QString)),this,SLOT(mediakeysSlot(QString,QString)));

    show();
}

void QtAvrcpBindingTestApp::btDeamonConnectionStatusSlot(const QString &in0, const QDBusVariant &in1)
{   
     int l_mdid = 0;
     QVariant reply = in1.variant(); 
     qDebug()<<"Module id btDeamonConnectionStatusSlot"<<m_moduleid<<reply.toBool()<<" "<<in0;
     bool bt_cnstat = true;
     if( (in0 == "disconnected" && true == reply.toBool())||(in0 == "Connected" && false == reply.toBool() ))
     {
         bt_cnstat = false;
     }
     if( (in0 == "disconnected" && false == reply.toBool())||(in0 == "Connected" && true == reply.toBool() ))
     {
         bt_cnstat = true;
     }
     if( false == bt_cnstat )
     {
         bt_cnstat = false;
         qDebug()<<"Got Signal DisConnected from bt daemon";
         if(m_moduleid>0)
         {
             unloadpulsemodule(m_moduleid);
             m_moduleid = 0;
         }
         isconnected = false;
         m_connectaction->setIcon(QIcon(":images/btdisconnect.png"));

     }
     if( true == bt_cnstat )
     {
         bt_cnstat = true;
         qDebug()<<"Got Signal Connected from bt daemon**"<<in0;
         qDebug()<<"Module id "<<m_moduleid;
         isconnected = true;
         m_connectaction->setIcon(QIcon(":images/btconnected.png"));
         m_gnome_setinterface->GrabMediaPlayerKeys("btplayer",0);
     }
        
}

void QtAvrcpBindingTestApp::btDeamonConnectedSlot()
{   
     int l_mdid;
     qDebug()<<"Got Signal Connected from bt daemon";
     qDebug()<<"Module id "<<m_moduleid;
     if( 0>=m_moduleid )
     {
         l_mdid = loadpulsemodule();
         if(l_mdid>0)
         {
             m_moduleid = l_mdid;   
             isconnected = true;
             m_connectaction->setIcon(QIcon(":images/btconnected.png"));
             m_gnome_setinterface->GrabMediaPlayerKeys("btplayer",0);
         }
     }
     
        
}
void QtAvrcpBindingTestApp::btDeamonDisconnectedSlot()
{
    qDebug()<<"Got Signal DisConnected from bt daemon";
    qDebug()<<"Module id "<<m_moduleid;
    if( 0<=m_moduleid )
    {
        unloadpulsemodule(m_moduleid);
        m_moduleid = 0;
    }    
    isconnected = false;
    m_connectaction->setIcon(QIcon("images/btdisconnect.png"));
}


void QtAvrcpBindingTestApp::playSlot()
{
    qDebug()<<"Called Play m_moduleid"<<m_moduleid;
    if(true == isconnected && 0 == m_moduleid)
    {
        int l_mdid=0;
        l_mdid = loadpulsemodule();
        if(l_mdid>0)
        {
            m_moduleid = l_mdid;   
          
        } 
    } 
    //this will involke the play button in mobile device
    m_avrcpbinding->PlayPause();

}

void QtAvrcpBindingTestApp::mediakeysSlot(QString appname,QString value)
{
    if("btplayer" == appname)
    {
        qDebug()<<"Value got from signal"<<value;
        if("Play" == value)
            playSlot();
        else if("Next" == value)
            nextSlot();
        else if("Previous" == value)
            prevSlot();
        else if("Stop" == value)
            stopSlot();
    }

}

void QtAvrcpBindingTestApp::pauseSlot()
{
    qDebug()<<"Called Pause";
    //this will involke the pause button in mobile device
    m_avrcpbinding->PlayPause();

}


void QtAvrcpBindingTestApp::stopSlot()
{
    qDebug()<<"Called Stop";
    //this will involke the stop button in mobile device
    //m_avrcpbinding->stop();

}

void QtAvrcpBindingTestApp::prevSlot()
{
    qDebug()<<"Called Prev";
    //this will involke the prev button in mobile device
    m_avrcpbinding->Prev();
}

void QtAvrcpBindingTestApp::nextSlot()
{
    qDebug()<<"Called next";
    //this will involke the next button in mobile device
    m_avrcpbinding->Next();
}
void QtAvrcpBindingTestApp::connectSlot()
{
    int l_mdid;
    if(!isconnected)
    {
        //connect to the device
        m_audiosource->Connect();
    }
    else
    {
        //connect to the device
        unloadpulsemodule(m_moduleid);
        m_moduleid = 0;        
        m_audiosource->Disconnect();
        isconnected = false;
        m_connectaction->setText("Connect");
    }


}

void QtAvrcpBindingTestApp::paintEvent(QPaintEvent *event)
{
     qDebug()<<"Paint Event Called";

}

void QtAvrcpBindingTestApp::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<"Key Press Event Called";

}
void QtAvrcpBindingTestApp::closeEvent(QCloseEvent *event)
{
    qDebug()<<"Close Event Called";
    if(m_moduleid>0)
    {
        unloadpulsemodule(m_moduleid);
        m_moduleid = 0;
    }
}
