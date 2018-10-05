#include <QApplication>
#include "mainwindow.h"
#include "conversor.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString num = "12.98089";
    QString result = Decimal_Binario(num);
    cout<< result.toStdString()<<endl;
    w.show();



    return a.exec();
}
