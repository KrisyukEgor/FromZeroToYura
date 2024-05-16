#include "transport.h"
#include "ui_transport.h"

Transport::Transport(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Transport)
{
    ui->setupUi(this);

    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

    ui->healthBar->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());

}

Transport::~Transport()
{
    delete ui;
}

void Transport::on_pushButton_8_clicked()
{
    emit(OpenMainWindow());
    close();
}

void Transport::updateHealth()
{
    ui->healthBar->setValue(Character::GetInstance()->getHealth());
}

void Transport::updateHappiness() {
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());
}
