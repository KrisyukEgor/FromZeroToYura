#include "job.h"
#include "ui_job.h"

Job::Job(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Job)
{
    ui->setupUi(this);



    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

    ui->healthBar_13->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar_13->setValue(Character::GetInstance()->getHappiness());

}

Job::~Job()
{
    delete ui;
}

void Job::on_pushButton_8_clicked()
{
    emit(OpenMainWindow());
    close();
}

void Job::updateHealth()
{
    ui->healthBar_13->setValue(Character::GetInstance()->getHealth());
}

void Job::updateHappiness() {
    ui->happinessBar_13->setValue(Character::GetInstance()->getHappiness());
}

