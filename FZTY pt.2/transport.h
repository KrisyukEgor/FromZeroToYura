#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QMainWindow>
#include "character.h"

namespace Ui {
class Transport;
}

class Transport : public QMainWindow
{
    Q_OBJECT

public:
    explicit Transport(QWidget *parent = nullptr);
    ~Transport();

signals:
    void OpenMainWindow();

    void updateTransportSignal();

private slots:
    void on_pushButton_8_clicked();

    void updateHealth();

    void updateHappiness();

private:
    Ui::Transport *ui;
};

#endif // TRANSPORT_H
