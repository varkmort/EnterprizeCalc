#include "QtCalc.hpp"
#include <QtWidgets/QApplication>


#include "..\Model\src\Operation.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtCalc w;
    Model::Operation * q = new Model::Summ();
    q->operator()(1,4);
    w.show();
    return a.exec();
}
