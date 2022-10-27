#include "mainscreen.h"

#include <QApplication>

#include "pedagio_implem.cpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainScreen w;
    w.show();

    return a.exec();
}
