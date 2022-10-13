#include "serial_messenger/serial_messenger.hpp"


SerialMessenger::SerialMessenger(QWidget *parent)
    : QMainWindow(parent) {
    setupUi(this);

    Messenger *tab_messenger = new Messenger;
    SendFile *tab_send_file = new SendFile;
    tabWidget->removeTab(0);
    tabWidget->addTab(tab_messenger, "Tab 1");
    tabWidget->addTab(tab_send_file, "Tab 2");
}
