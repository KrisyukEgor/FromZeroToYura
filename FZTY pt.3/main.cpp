#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();

    if (Character::GetInstance()->getHappiness() < 30) {
        QMessageBox::information(nullptr, "Мало счастья!", "Пополните счастье вашему персонажу, иначе он умрет");
    }

    if (Character::GetInstance()->getHealth() < 40) {
        QMessageBox::information(nullptr, "Мало здоровья!", "Пополните здоровье вашему персонажу, иначе он умрет");
    }

    return a.exec();
}
