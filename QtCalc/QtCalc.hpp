#pragma once

#include <QtWidgets/QMainWindow>
#include <QRadioButton>
#include "ui_QtCalc.h"
#include "..\View\src\Calc.hpp"

class QtCalc : public QMainWindow
{
    Q_OBJECT

public:
    QtCalc(QWidget *parent = Q_NULLPTR);
    ~QtCalc();

private slots:
    void calculate();


private:
    Ui::QtCalcClass *ui;
    View::Calc *calc;
    QList<QRadioButton *> operations;
};
