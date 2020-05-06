#include "screen_welcome.h"

#include <QApplication>
#include <QSurfaceFormat>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Screen_Welcome w;
    w.show();
    return a.exec();
}
