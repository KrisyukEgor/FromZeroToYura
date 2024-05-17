#include "job.h"
#include "ui_job.h"

Job::Job(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Job)
{
    ui->setupUi(this);

    connect(this, SIGNAL(updateJobSignal()), Character::GetInstance(), SLOT(updateChanges()));


    connect(Character::GetInstance(), SIGNAL(updateHealth()), this, SLOT(updateHealth()));
    connect(Character::GetInstance(), SIGNAL(updateHappiness()), this, SLOT(updateHappiness()));

    ui->healthBar->setValue(Character::GetInstance()->getHealth());
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());

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
    ui->healthBar->setValue(Character::GetInstance()->getHealth());
}

void Job::updateHappiness() {
    ui->happinessBar->setValue(Character::GetInstance()->getHappiness());
}


void Job::on_pushButton_clicked()
{
    if (Character::GetInstance()->getHousing() != "Нет") {
        Character::GetInstance()->setJob("Промоутер");
        ui->pushButton->setEnabled(false);
        ui->pushButton->hide();
        emit updateJobSignal();
    }
    else {
        QMessageBox::information(this, "Не выполнены все условия", "Жилье: общежитие");
    }
}

void Job::on_pushButton_38_clicked()
{
    if (Character::GetInstance()->canChangeJob()) {
        qDebug() << "Уже можно";
    }
    if (Character::GetInstance()->canChangeJob() && Character::GetInstance()->getClothing() != "Нет") {
        Character::GetInstance()->setJob("Курьер");
        ui->pushButton_38->setEnabled(false);
        ui->pushButton_38->hide();
        ui->pushButton->show();
        emit updateJobSignal();
    }
    else {
        QMessageBox::information(this, "Не выполнены все условия", "Промоутер: 1 месяц <br>Одежда: Кеды, шорты и майка");
    }
}

