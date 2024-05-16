#ifndef CLOTHES_H
#define CLOTHES_H

#include <QMainWindow>
#include "character.h"

namespace Ui {
class Clothes;
}

class Clothes : public QMainWindow
{
    Q_OBJECT
signals:
    void OpenMainWindow();

    void UpdateClothesSignal();

public:
    explicit Clothes(QWidget *parent = nullptr);
    ~Clothes();

private slots:
    void on_pushButton_8_clicked();

    void updateHealth();

    void updateHappiness();

private:
    Ui::Clothes *ui;

};

#endif // CLOTHES_H
