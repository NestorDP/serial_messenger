
#include <QApplication>
#include <QWidget>

#include "serial_messenger/serial_messenger.hpp"
#include "serial_messenger/messenger.hpp"
#include "ui_serial_messenger.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    SerialMessenger serial_messenger_gui;

    serial_messenger_gui.show();
    return app.exec();
}
