#include "serial_messenger/messenger.hpp"

Messenger::Messenger(QWidget *parent)
    : QWidget(parent) {
    setupUi(this);
    text_list << "monitor" << "mouse" << "keyboard" << "hard disk drive"
            << "graphic card" << "sound card" << "memory" << "motherboard";
    lineEdit->setPlaceholderText("Write a message here to send");
    pushButton->setText("Send");
}


void Messenger::on_pushButton_clicked() {
    listWidget->addItem(lineEdit->text());
    lineEdit->selectAll();
    lineEdit->del();
}


void Messenger::on_lineEdit_editingFinished() {
    listWidget->addItem(lineEdit->text());
    lineEdit->selectAll();
    lineEdit->del();
}

