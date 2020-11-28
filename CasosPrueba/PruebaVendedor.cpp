#include<string>
#include "Vendedor.h"
#include<fstream>
using namespace std;

void IDatos(Vendedor &arrVendedor)
{
    string pais, estado, ciudad, colonia, calle, noTarjeta, Prod1, Prod2, Prod3;
    double Prec1, Prec2, Prec3;
    int CVV, mes ,saldo, año, numCasa, codPostal, cantProd;
    cout << "Direccion a la que se enviará su producto: " << endl;
    cout << "Pais: "; cin >> pais;
    cout << "Estado: "; cin >> estado;
    cout << "Ciudad: "; cin >> ciudad; 
    cout << "Colonia: "; cin >> colonia; 
    cout << "Calle: "; cin >> calle;
    cout << "\n" << endl;
    cout << "Numero de casa: "; cin >> numCasa; 
    cout << "Codigo Postal: "; cin >> codPostal; 
    Direcciontwo Ndireccion(pais, estado, ciudad, colonia, calle, numCasa, codPostal);
    cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> noTarjeta; cout << endl;
    cout << "Ingrese su CVV: "; cin >> CVV; cout << endl;
    cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
    cout << "Ingrese el mes de expiración: "; cin >> mes; cout << endl;
    cout << "Ingrese el año de expiración: "; cin >> año; cout << endl;
    cout << "\n" << endl;
    CtaBanc CtaIngresada(noTarjeta, CVV, saldo, mes, año);
    arrVendedor.setDireccion(Ndireccion);
    arrVendedor.setCtaBanc(CtaIngresada);
    cout << "Cuantos Productos vas a vender (Max. 3): "; cin >> cantProd;
    cout << "Nombre de tu producto 1: "; cin >> Prod1;
    cout << "Ingresa el precio de tu producto 1: "; cin >> Prec1;
    cout << "Nombre de tu producto 2: "; cin >> Prod2;
    cout << "Ingresa el precio de tu producto 2: "; cin >> Prec2;
    cout << "Nombre de tu producto 3: "; cin >> Prod3;
    cout << "Ingresa el precio de tu producto 3: "; cin >> Prec3;
    arrVendedor.setProducto1(Prod1);
    arrVendedor.setPrecio1(Prec1);
    arrVendedor.setProducto2(Prod2);
    arrVendedor.setPrecio2(Prec2);
    arrVendedor.setProducto3(Prod3);
    arrVendedor.setPrecio3(Prec3);
}   

int main()
{
    string USername;
    char opcion;
    int opcionx;
    double saldo;
    Vendedor arrVendedor[5];
    cin >> USername;
    IDatos(arrVendedor[0]);
    arrVendedor[0].setNombre(USername);
    cout << arrVendedor[0].getName() << endl;
    cout << arrVendedor[0].getDtaBanc().getNoTarjeta() << endl;
    arrVendedor[0].getDireccion().print();
    arrVendedor[0].PrintProd();
}