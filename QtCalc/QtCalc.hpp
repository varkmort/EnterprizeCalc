#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCalc.h"

class QtCalc : public QMainWindow
{
    Q_OBJECT

public:
    QtCalc(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtCalcClass ui;
};
