#include "relationship.h"
#include "ui_relationship.h"

Relationship::Relationship(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Relationship)
{
    ui->setupUi(this);

    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

    ui->healthBar->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());

}

Relationship::~Relationship()
{
    delete ui;
}

void Relationship::on_pushButton_8_clicked()
{
    emit(OpenMainWindow());
    close();
}

void Relationship::updateHealth()
{
    ui->healthBar->setValue(Character::GetInstance()->getHealth());
}

void Relationship::updateHappiness() {
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());
}
