#ifndef SERIAL_MESSENGER_H
#define SERIAL_MESSENGER_H

#include <QWidget>
#include "ui_serial_messenger.h"

class CalculatorForm : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorForm(QWidget *parent = nullptr);

private slots:
    void on_inputSpinBox1_valueChanged(int value);
    void on_inputSpinBox2_valueChanged(int value);

private:
    Ui::CalculatorForm ui;
};
//! [1]

#endif  // SERIAL_MESSENGER_H
