#include "serial_messenger/serial_messenger.hpp"


SerialMessenger::SerialMessenger(QWidget *parent)
    : QMainWindow(parent) {
    setupUi(this);

    Messenger *tab_messenger = new Messenger;
    SendFile *tab_send_file = new SendFile;
    tabWidget->removeTab(0);
    tabWidget->addTab(tab_messenger, "Messenger");
    tabWidget->addTab(tab_send_file, "Send/Receive file");

    QPixmap app_icon("icons/db9.png");
    this->setWindowIcon(QIcon(app_icon));

    QPixmap off_icon("icons/db9Off.png");
    QPixmap save_icon("icons/save.png");
    QPixmap new_icon("icons/new.png");
    QPixmap open_icon("icons/open.png");
    toolBar->addAction(QIcon(save_icon), "Save Chat");
    toolBar->addAction(QIcon(new_icon), "New Chat");
    toolBar->addAction(QIcon(open_icon), "Open Chat");
    toolBar->addSeparator();
    action_connect_ = toolBar->addAction(QIcon(off_icon), "Connect");
    connect(action_connect_, &QAction::triggered, qApp, &QApplication::quit);
}

// void SerialMessenger::on_action_connect_actionTriggered() {
//     QApplication::quit();
// }
