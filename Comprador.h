#ifndef Comprador_h
#define Comprador_h
#include "Direccion.h"
#include "CtaBanc.h"   
#include<fstream>

class Comprador{

    private:
    // Declaracion de los atributos de la clase
    string nombre;
    Direccion direction;
    CtaBanc datosBancarios; // convertir clase cta bancaria a atributo ligado al txt

    public:
    Comprador(); // Constructor default 
    Comprador(string Nnombre, Direccion nDireccion, CtaBanc NCtaBanc); // Constructor con parametros

    // Regresar los valores de los atributos
    string getName();
    Direccion getDireccion();
    CtaBanc getDtaBanc();

    // Asignar valores a los atributos
    void setDireccion(Direccion Ndireccion);
    void setNombre(string Username);
    void setCtaBanc(CtaBanc NCtaBAnc);
    void print();
};
// Implementacion de los métodos
Comprador::Comprador(){
    nombre = "-";
    CtaBanc datosBancariosDFT;
    datosBancarios = datosBancariosDFT;
    Direccion directionDft;
    direction = directionDft;
}

Comprador :: Comprador(string Nnombre, Direccion nDireccion, CtaBanc NCtaBanc)
{
    nombre = Nnombre;
    direction = nDireccion;
    datosBancarios = NCtaBanc;
}

void Comprador :: setCtaBanc(CtaBanc NCtaBAnc)
{
    datosBancarios = NCtaBAnc;
}

string Comprador :: getName()
{
    return nombre;
}

Direccion Comprador :: getDireccion()
{
    return direction;
}
    
CtaBanc Comprador :: getDtaBanc()
{
    return datosBancarios;
}


void Comprador :: setDireccion(Direccion Ndireccion){
    direction = Ndireccion;
}

void Comprador :: setNombre(string Username)
{
    nombre = Username;
}

void Comprador ::  print()
{
    cout << nombre << " No. Tarjeta " << getDtaBanc().getNoTarjeta() << endl;
    cout << "Saldo " <<  getDtaBanc().getSaldo() << "CVV " << getDtaBanc().getCVV() << endl;
    cout << "Fecha Exp " <<  getDtaBanc().getMes() << "/" <<  getDtaBanc().getAño() << endl;
}

#endif