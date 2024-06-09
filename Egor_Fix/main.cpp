#include <QApplication>
#include "startpage.h"
#include "character.h"
#include "mainwindow.h"




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartPage startPage;
    MainWindow mainWindow;

        QObject::connect(&startPage, &StartPage::gameLoaded, [&]() {
            startPage.hide();
            mainWindow.show();
        });

        QObject::connect(&startPage, &StartPage::newGameStarted, [&]() {
            startPage.hide();
            mainWindow.show();
        });

        startPage.setWindowTitle("Меню игры");
            startPage.resize(300, 200);
            startPage.show();

    return a.exec();
}
