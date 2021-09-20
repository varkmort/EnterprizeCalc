#include "QtCalc.hpp"

QtCalc::QtCalc(QWidget *parent):
    ui(new Ui::QtCalcClass),
    calc(new View::Calc),
    QMainWindow(parent)
{
    ui->setupUi(this);
    auto commands{ calc->getOperations() };
    for (auto &command : commands) {
        auto temp = new QRadioButton(QString(command.c_str()));
        operations.append(temp);
        ui->toolBar->addWidget(temp);
    }
    QObject::connect(ui->pushButton_12, &QPushButton::clicked, this, &QtCalc::calculate);
}

QtCalc::~QtCalc() {
    delete ui;
    delete calc;
}

void QtCalc::calculate() {
    std::string temp;
    for (auto el : operations) {
        if (el->isChecked()) {
            temp = el->text().toStdString();
            break;
        }
    }
    ui->lineEdit_3->setText(QString(calc->operation(ui->lineEdit->text().toStdString(), ui->lineEdit_2->text().toStdString(), temp).c_str()));
}