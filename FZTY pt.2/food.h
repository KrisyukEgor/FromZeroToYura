#ifndef FOOD_H
#define FOOD_H

#include <QMainWindow>
#include "character.h"

namespace Ui {
class Food;
}

class Food : public QMainWindow
{
    Q_OBJECT

public:
    explicit Food(QWidget *parent = nullptr);
    ~Food();

signals:
    void OpenMainWindow();

    void updateFoodSignal();

private slots:
    void on_pushButton_8_clicked();

    void updateHealth();

    void updateHappiness();

private:
    Ui::Food *ui;
};

#endif // FOOD_H
