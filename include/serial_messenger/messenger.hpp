#ifndef MESSENGER_H
#define MESSENGER_H

#include <QWidget>
#include "ui_messenger.h"

class Messenger : public QWidget, private Ui::Messenger {
    Q_OBJECT

public:
    explicit Messenger(QWidget *parent = nullptr);

private slots:
    void on_pushButton_clicked();
    
};


#endif  // MESSENGER_H

