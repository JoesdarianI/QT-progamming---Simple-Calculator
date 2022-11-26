#include "mainwindow.h"

#include <QApplication>

//Joesdarian Ignatius - 2440021086 - LB40

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
