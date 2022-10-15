#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H
// 
#include <QMainWindow>

#include "ui_serial_messenger.h"
#include "ui_messenger.h"

#include "serial_messenger/messenger.hpp"
#include "serial_messenger/send_file.hpp"

class SerialMessenger : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    explicit SerialMessenger(QWidget *parent = nullptr);


private slots:
    void on_action_connect_actionTriggered();
//     void on_pushButton_3_clicked();

private:
    QAction *action_connect_ = new QAction();

};

#endif  // MAIN_WINDOW_H
