#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow FromZeroToYura;
    FromZeroToYura.show();
    return a.exec();
}
