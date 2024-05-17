#include "startpage.h"
#include <QMessageBox>
#include "character.h"

StartPage::StartPage(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QPushButton *loadButton = new QPushButton("Загрузить игру", this);
    QPushButton *newGameButton = new QPushButton("Новая игра", this);

    layout->addWidget(loadButton);
    layout->addWidget(newGameButton);

    connect(loadButton, &QPushButton::clicked, this, &StartPage::loadGame);
    connect(newGameButton, &QPushButton::clicked, this, &StartPage::newGame);
}

void StartPage::loadGame() {
    Character *character = Character::GetInstance();
    if (character->loadCharacterData("character.txt")) {
        character->loadCharacterData("character.txt");
        QMessageBox::information(this, "Загрузка игры", "Данные персонажа успешно загружены.");
        emit gameLoaded();
    } else {
        QMessageBox::warning(this, "Загрузка игры", "Не удалось загрузить данные персонажа.");
    }
}

void StartPage::newGame() {
    Character *character = Character::GetInstance();
    character->setAge(18);
    character->setHealth(100);
    character->setHappiness(100);
    character->setMoney(1000);
    character->setMonthlyIncome(0);
    character->setMonthlyExpenses(0);
    character->setJob("Нет");
    character->setRelationship("Нет");
    character->setClothing("Нет");
    character->setFood("Нет");
    character->setHousing("Нет");
    character->setTransport("Нет");

    if (character->saveCharacterData("character.txt")) {
        character->saveCharacterData("character.txt");
        QMessageBox::information(this, "Новая игра", "Данные нового персонажа успешно сохранены.");
        emit newGameStarted();
    } else {
        QMessageBox::warning(this, "Новая игра", "Не удалось сохранить данные нового персонажа.");
    }
}
