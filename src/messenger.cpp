#include "serial_messenger/messenger.hpp"

Messenger::Messenger(QWidget *parent)
    : QWidget(parent) {
    setupUi(this);
}

void Messenger::on_pushButton_clicked() {
    pushButton->setText("Example");
}

