#include "housing.h"
#include "ui_housing.h"

Housing::Housing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Housing)
{
    ui->setupUi(this);


    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

    ui->healthBar->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());

}

Housing::~Housing()
{
    delete ui;
}

void Housing::on_pushButton_8_clicked()
{
    emit(OpenMainWindow());
    close();
}

void Housing::updateHealth()
{
    ui->healthBar->setValue(Character::GetInstance()->getHealth());
}

void Housing::updateHappiness() {
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());
}

