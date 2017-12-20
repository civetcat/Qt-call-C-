#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QAxObject>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QAxObject object("BFBFEFCB-1ADF-4CE9-A33A-1EF206AC12BB");
    QVariantList params0;
    params0 << QVariant("D:\\Code\\call DLL\\call_c_sharp_dll\\debug");
    QVariant var = object.dynamicCall("startBluetooth(String)",params0);
    bool b = var.toBool();
    return a.exec();
}
