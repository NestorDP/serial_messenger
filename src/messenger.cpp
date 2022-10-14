#include "serial_messenger/messenger.hpp"

Messenger::Messenger(QWidget *parent)
    : QWidget(parent) {
    setupUi(this);
    text_list << "monitor" << "mouse" << "keyboard" << "hard disk drive"
            << "graphic card" << "sound card" << "memory" << "motherboard";
    lineEdit->setPlaceholderText("Write a message here to send");
}


void Messenger::on_lineEdit_editingFinished() {
    listWidget->addItem(lineEdit->text());
    lineEdit->selectAll();
    lineEdit->del();
}

