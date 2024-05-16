#include "food.h"
#include "ui_food.h"

Food::Food(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Food)
{
    ui->setupUi(this);

    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

    ui->healthBar->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());

}

Food::~Food()
{
    delete ui;
}

void Food::on_pushButton_8_clicked()
{
    emit(OpenMainWindow());
    close();
}

void Food::updateHealth()
{
    ui->healthBar->setValue(Character::GetInstance()->getHealth());
}

void Food::updateHappiness() {
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());
}
