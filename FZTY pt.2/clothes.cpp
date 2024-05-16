#include "clothes.h"
#include "ui_clothes.h"

Clothes::Clothes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Clothes)
{
    ui->setupUi(this);

    ui->healthBar->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());

    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

}

Clothes::~Clothes()
{
    delete ui;
}


void Clothes::on_pushButton_8_clicked()
{
    emit(OpenMainWindow());
    close();
}

void Clothes::updateHealth()
{
    ui->healthBar->setValue(Character::GetInstance()->getHealth());
}

void Clothes::updateHappiness() {
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());
}


