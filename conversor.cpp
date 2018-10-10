#include <iostream>
#include <math.h>
#include "ListaDoble.cpp"
#include <QString>
#include <QStringList>


QString Decimal_Binario(QString const num) {
    ListaDoble<int>* lista = new ListaDoble<int>();
    int rem;
    int Pos = 0;
    int temp;
    temp = num.split(".")[0].toInt();
    cout<<temp<<endl;
    while (temp > 0)
    {
        rem = temp % 2;
        lista->insertarNodo(rem);
        temp /= 2;
        Pos++;
    }
    if(num.contains(".")){
        float flotante = num.split(".")[1].toInt();
        flotante = float(flotante / pow(10,num.size()-Pos+1));
        cout<<flotante<<endl;
        while (flotante != 0)
        {
            flotante *= 2;
            rem = flotante;
            flotante -= rem;
            lista->insertarNodo(rem);
        }
    }
    Nodo<int>* aux = lista->primero;
    QString convertido = "";
    while(aux){
        if(Pos == 0)
        {
             convertido.push_back(".");
             Pos--;
        }
        if(Pos < 0){
            QString s = QString::number(aux->getDato());
            convertido.push_back(s);
            aux = aux->getSiguiente();
        }else{
            QString s = QString::number(aux->getDato());
            convertido.push_front(s);
            aux = aux->getSiguiente();
            Pos--;
        }
    }
    return convertido;
}
// C++ program to convert binary to decimal
// Function to convert binary to decimal
QString binaryToDecimal(QString n)
{
    QString num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;

        dec_value += last_digit*base;

        base = base*2;
    }

    return dec_value;
}

