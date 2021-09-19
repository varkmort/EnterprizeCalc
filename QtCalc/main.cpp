#include "QtCalc.hpp"
#include <QtWidgets/QApplication>

#include "..\View\src\Calc.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtCalc w;
    w.show();
    return a.exec();
}
