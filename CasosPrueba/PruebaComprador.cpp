#include<iostream>
#include<string>
#include "Comprador.h"
#include<fstream>
using namespace std;

void IDatos(Comprador &ArrPersona)
{
    string pais, estado, ciudad, colonia, calle, noTarjeta;
    int CVV, mes ,saldo, año, numCasa, codPostal;
    cout << "Direccion a la que se enviará su producto: " << endl;
    cout << "Pais: "; cin >> pais;
    cout << "Estado: "; cin >> estado;
    cout << "Ciudad: "; cin >> ciudad; 
    cout << "Colonia: "; cin >> colonia; 
    cout << "Calle: "; cin >> calle;
    cout << "\n" << endl;
    cout << "Numero de casa: "; cin >> numCasa; 
    cout << "Codigo Postal: "; cin >> codPostal; 
    Direccion Ndireccion(pais, estado, ciudad, colonia, calle, numCasa, codPostal);
    cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> noTarjeta; cout << endl;
    cout << "Ingrese su CVV: "; cin >> CVV; cout << endl;
    cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
    cout << "Ingrese el mes de expiración: "; cin >> mes; cout << endl;
    cout << "Ingrese el año de expiración: "; cin >> año; cout << endl;
    CtaBanc CtaIngresada(noTarjeta, CVV, saldo, mes, año);
    ArrPersona.setDireccion(Ndireccion);
    ArrPersona.setCtaBanc(CtaIngresada);
}    

int main()
{
    string USername;
    char opcion;
    int opcionx;
    double saldo;
    Comprador arrCompradores[5];
    cin >> USername;
    IDatos(arrCompradores[0]);
    arrCompradores[0].setNombre(USername);
    cout << arrCompradores[0].getName() << endl;
    cout << arrCompradores[0].getDtaBanc().getNoTarjeta() << endl;
    arrCompradores[0].getDireccion().print();
}