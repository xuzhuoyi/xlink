#include "xlink.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Xlink w;
    w.show();

    return a.exec();
}
