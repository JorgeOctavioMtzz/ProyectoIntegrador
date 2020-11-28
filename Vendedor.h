#ifndef Vendedor_h
#define Vendedor_h
#include<iostream>
#include "Direcciontwo.h"
#include "CtaBanc.h"   
using namespace std;

class Vendedor{

    private:
    // Declaracion de los atributos de la clase
    string nombre,Producto1, Producto2,Producto3;
    double Precio1, Precio2, Precio3;
    Direcciontwo Direccion;
    CtaBanc datosBancarios; // convertir clase cta bancaria a atributo ligado al txt

    public:
    Vendedor(); // Constructor default 
    Vendedor(string Nnombre, Direcciontwo nDireccion, CtaBanc NCtaBanc, string nProducto1, string nProducto2, string nProducto3, double nPrecio1, double nPrecio2, double nPrecio3); // Constructor con parametros

    // Regresar los valores de los atributos
    string getName();
    Direcciontwo getDireccion();
    CtaBanc getDtaBanc();
    string getProducto1();
    string getProducto2();
    string getProducto3();
    double getPrecio1();
    double getPrecio2();
    double getPrecio3();

    // Asignar valores a los atributos
    void setDireccion(Direcciontwo NDireccion);
    void setNombre(string Username);
    void setCtaBanc(CtaBanc NCtaBAnc);
    void setProducto1(string nProducto1);
    void setProducto2(string nProducto2);
    void setProducto3(string nProducto3);
    void setPrecio1(double nPrecio1);
    void setPrecio2(double nPrecio2);
    void setPrecio3(double nPrecio3);
    void PrintProd();
    void print();
};
// Implementacion de los métodos
Vendedor::Vendedor(){
    nombre = "-";
    CtaBanc datosBancariosDFT;
    datosBancarios = datosBancariosDFT;
    Direcciontwo DireccionDft;
    Direccion = DireccionDft;
    Producto1 = "-";
    Producto2 = "-";
    Producto3 = "-";
    Precio1 = 0.00;
    Precio2 = 0.00;
    Precio3 = 0.00;
}

Vendedor :: Vendedor(string Nnombre, Direcciontwo nDireccion, CtaBanc NCtaBanc,  string nProducto1, string nProducto2, string nProducto3, double nPrecio1, double nPrecio2, double nPrecio3)
{
    nombre = Nnombre;
    Direccion = nDireccion;
    datosBancarios = NCtaBanc;
    Producto1 = nProducto1;
    Producto2 = nProducto2;
    Producto3 = nProducto3;
    Precio1 = nPrecio1;
    Precio2 = nPrecio2;
    Precio3 = nPrecio3;
}


string Vendedor :: getName()
{
    return nombre;
}

Direcciontwo Vendedor :: getDireccion()
{
    return Direccion;
}
    
CtaBanc Vendedor :: getDtaBanc()
{
    return datosBancarios;
}

string Vendedor :: getProducto1()
{
    return Producto1;
}

string Vendedor :: getProducto2()
{
    return Producto2;
}

string Vendedor :: getProducto3()
{
    return Producto3;
}

double Vendedor :: getPrecio1()
{
    return Precio1;
}

double Vendedor :: getPrecio2()
{
    return Precio2;
}

double Vendedor :: getPrecio3()
{
    return Precio3;
}

void Vendedor :: setDireccion(Direcciontwo NDireccion){
    Direccion = NDireccion;
}

void Vendedor :: setNombre(string Username)
{
    nombre = Username;
}

void Vendedor :: setCtaBanc(CtaBanc NCtaBAnc)
{
    datosBancarios = NCtaBAnc;
}

void Vendedor :: setProducto1(string nProducto1)
{
    Producto1 = nProducto1;
}

void Vendedor :: setProducto2(string nProducto2)
{
    Producto2 = nProducto2;
}

void Vendedor :: setProducto3(string nProducto3)
{
    Producto3 = nProducto3;
}

void Vendedor :: setPrecio1(double nPrecio1)
{
    Precio1 = nPrecio1;
}

void Vendedor :: setPrecio2(double nPrecio2)
{
    Precio2 = nPrecio2;
}

void Vendedor :: setPrecio3(double nPrecio3)
{
    Precio3 = nPrecio3;
}

void Vendedor :: print()
{
    cout << nombre << " No. Tarjeta " << getDtaBanc().getNoTarjeta() << endl;
    cout << "Saldo " <<  getDtaBanc().getSaldo()
}

void Vendedor :: PrintProd()
{
    cout << "\n" << Producto1 << "           $" << Precio1 << "\n"; 
    cout << "\n" << Producto2 << "           $" << Precio2 << "\n"; 
    cout << "\n" << Producto3 << "           $" << Precio3 << "\n"; 
}

#endif