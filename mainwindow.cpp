#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "conversor.cpp"
#include <QGraphicsTextItem>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
using namespace std;
void MainWindow::on_Operacion_clicked()
{
    QString dato = this -> ui -> IngresaNum -> toPlainText();
    QString comboInfo = ui ->selecOps->currentText();
    if (comboInfo=="Decimal a Binario")
    {
        QString result = Decimal_Binario(dato);
        ui->pantalla->setText(result);
    }
    else
    {
       QString dato = this -> ui -> IngresaNum -> toPlainText();
       QString result = binarioDecimal(dato);
       ui->pantalla->setText(result);
    }


}

void MainWindow::on_limpiar_clicked()
{
    ui->pantalla->setText(" ");
}
