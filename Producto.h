#ifndef Producto_h
#define Producto_h

#include <iostream>
#include <string>
using namespace std;

class Producto{
    private:

    double precio;
    string tamaño;

    Producto();
    Producto(double nPrecio, string nTamaño);
    void setPrecio(double precio);
    void setTamaño(string tamaño);

    double getPrecio();
    string getTamaño();

};

Producto::Producto(){
    precio = 0;
    tamaño = "-";
}

Producto::Producto(double nPrecio, string nTamaño){
    precio = nPrecio;
    tamaño = nTamaño;
}

double Producto::getPrecio(){
     return precio;
}
string Producto::getTamaño(){
    return tamaño;
}

#endif 