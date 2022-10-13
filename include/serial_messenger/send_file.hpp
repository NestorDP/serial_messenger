#ifndef SENDE_FILE_H
#define SENDE_FILE_H

#include <QWidget>
#include "ui_send_file.h"

class SendFile : public QWidget
{
    Q_OBJECT

public:
    explicit SendFile(QWidget *parent = nullptr);

// private slots:
//     void on_inputSpinBox1_valueChanged(int value);
//     void on_inputSpinBox2_valueChanged(int value);

private:
    Ui::SendFile ui;
};


#endif  // SENDE_FILE_H

