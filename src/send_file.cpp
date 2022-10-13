#include "serial_messenger/send_file.hpp"

//! [0]
SendFile::SendFile(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

// void Messenger::on_inputSpinBox1_valueChanged(int value)
// {
//     ui.outputWidget->setText(QString::number(value + ui.inputSpinBox2->value()));
// }


// void Messenger::on_inputSpinBox2_valueChanged(int value)
// {
//     ui.outputWidget->setText(QString::number(value + ui.inputSpinBox1->value()));
// }
