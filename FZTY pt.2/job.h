#ifndef JOB_H
#define JOB_H

#include <QMainWindow>
//#include <QScrollArea>
//#include <QWidget>
#include "character.h"

namespace Ui {
class Job;
}

class Job : public QMainWindow
{
    Q_OBJECT

public:
    explicit Job(QWidget *parent = nullptr);
    ~Job();

signals:
    void OpenMainWindow();

    void updateJobSignal();

private slots:
    void on_pushButton_8_clicked();

    void updateHealth();

    void updateHappiness();

private:
    Ui::Job *ui;
};

#endif // JOB_H
