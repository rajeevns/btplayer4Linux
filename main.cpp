#include <QtGui/QApplication>
#include<avrcpprofile/qtavrcpbindingtestapp.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtAvrcpBindingTestApp *m_avrcptestapp = new QtAvrcpBindingTestApp();
    m_avrcptestapp->show();
    m_avrcptestapp->setWindowTitle("Cute Bt Player");
    m_avrcptestapp->setWindowIcon(QIcon(":images/btplayer.png"));
    return a.exec();
}
