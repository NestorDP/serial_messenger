
#include <QApplication>
#include <QWidget>

#include "serial_messenger/serial_messenger.hpp"
#include "ui_serial_messenger.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    CalculatorForm calculator;
    
    calculator.show();
    return app.exec();
}
