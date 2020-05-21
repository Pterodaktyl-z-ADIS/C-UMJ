#include "screen_welcome.h"
#include "server.h"
#include <QApplication>
#include <QSurfaceFormat>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    Screen_Welcome w;
//    w.show();

    Server server;
    server.StartServer();

    return a.exec();
}
