#ifndef HOUSING_H
#define HOUSING_H

#include <QMainWindow>
#include "character.h"

namespace Ui {
class Housing;
}

class Housing : public QMainWindow
{
    Q_OBJECT

public:
    explicit Housing(QWidget *parent = nullptr);
    ~Housing();

signals:
    void OpenMainWindow();

    void updateHousingSignal();

private slots:
    void on_pushButton_8_clicked();

    void updateHealth();

    void updateHappiness();

private:
    Ui::Housing *ui;
};

#endif // HOUSING_H
