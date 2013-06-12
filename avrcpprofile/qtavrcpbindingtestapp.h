#ifndef QTAVRCPBINDINGTESTAPP_H
#define QTAVRCPBINDINGTESTAPP_H

#include <QWidget>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<org.bluez_control.h>
#include <org.bluez_audiosource.h>
#include <org.gnome.SettingsDaemon.h>
#include<QToolBar>
#include<QStyle>
#include<QIcon>
#include<QAction>
#include<QBrush>
#include<QImage>
#include<QPalette>


class QtAvrcpBindingTestApp : public QWidget
{
    Q_OBJECT
public:
    explicit QtAvrcpBindingTestApp(QWidget *parent = 0);

signals:

public slots:
//slots used to control basic playback of the device
    void playSlot();
    void pauseSlot();
    void stopSlot();
    void nextSlot();
    void prevSlot();
    void connectSlot();
    void btDeamonConnectedSlot();
    void btDeamonConnectionStatusSlot(const QString &in0, const QDBusVariant &in1);
    void btDeamonDisconnectedSlot();
    void closeEvent(QCloseEvent *event);
    void mediakeysSlot(QString,QString);

private:
    QToolBar *m_bottomtoolbar;
    QToolBar *m_toptoolbar;
    QAction *m_connectaction;
    QAction *m_prevaction;
    QAction *m_playpauseaction;
    QAction *m_nextaction;
    QAction *m_stopaction;
    QVBoxLayout *m_mainlayout;
    QHBoxLayout *m_tophboxlayout;
    QHBoxLayout *m_bottomhboxlayout;
    int m_moduleid;
    bool isconnected;


    //qt binding for avrcp profile
    OrgBluezControlInterface *m_avrcpbinding;
    OrgBluezAudioSourceInterface *m_audiosource;

    //dbus bundings for gnomesettings daemon
    OrgGnomeSettingsDaemonMediaKeysInterface *m_gnome_setinterface;
    
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    

};

#endif // QTAVRCPBINDINGTESTAPP_H
