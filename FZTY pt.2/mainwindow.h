#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QCoreApplication>
#include <QDebug>
#include <QMouseEvent>
#include "ui_mainwindow.h"
#include "clothes.h"
#include "happiness.h"
#include "health.h"
#include "job.h"
#include "housing.h"
#include "food.h"
#include "relationship.h"
#include "transport.h"
#include "character.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent* event) override;

private slots:
    void on_findClothes_clicked();

    void OpenWindow();

    void on_findWork_clicked();

    void on_findHousing_clicked();

    void on_findTransport_clicked();

    void on_findRelationship_clicked();

    void on_findFood_clicked();

    void updateHealth();

    void updateHappiness();

    void updateMoney();

    void updateAge();

    void updateJob();

    void updateRelationship();

    void updateTransport();

    void updateFood();

    void updateClothes();

    void updateHousing();

    void updateIncome();

    void updateExpenses();

private:
    Ui::MainWindow *ui;

    Clothes* clothesWindow;
    Happiness* happinessWindow;
    Health* healthWindow;
    Job* jobWindow;
    Housing* housingWindow;
    Relationship* relationshipWindow;
    Transport* transportWindow;
    Food* foodWindow;
    Character* character;

    // QWidget interface
};
#endif // MAINWINDOW_H
