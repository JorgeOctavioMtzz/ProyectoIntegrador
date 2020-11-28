#include<iostream>
#include<string>
#include "Comprador.h"
#include"Vendedor.h"
using namespace std;
void IDatosComprador(Comprador ArrPersona[], int &numCompradores)
{
    string pais, estado, ciudad, colonia, calle, noTarjeta, USername;
    int CVV, mes ,saldo, año, numCasa, codPostal, numCompradores;
    cout << "¿Cuantos compradores quieres registrar? (Max. 20) "; cin >> numCompradores;
    for (int cont=0; cont < numCompradores ; cont++)
    {
        cout << "Nombre del comprador: "; cin >> USername;
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
        ArrPersona[cont].setNombre(USername);
        ArrPersona[cont].setDireccion(Ndireccion);
        ArrPersona[cont].setCtaBanc(CtaIngresada);

    }
}   

void IDatosVendedor(Vendedor ArrVendedor[], int &numVendedores)
{
    
    string pais, estado, ciudad, colonia, calle, noTarjeta, Prod1, Prod2, Prod3;
    double Prec1, Prec2, Prec3;
    int saldo, numCasa, codPostal, numVendedores;
    cout << "¿Cuantos compradores quieres registrar? (Max. 20) "; cin >> numVendedores;
    for (int cont=0; cont < numVendedores ; cont++)
    {
        cout << "Direccion desde la que se enviará su producto: " << endl;
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
        cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
        cout << "\n" << endl;
        CtaBanc CtaIngresada;
        CtaIngresada.setNoTarjeta(noTarjeta);
        CtaIngresada.setSaldo(saldo);
        ArrVendedor[cont].setDireccion(Ndireccion);
        ArrVendedor[cont].setCtaBanc(CtaIngresada);
        cout << "Nombre de tu producto 1: "; cin >> Prod1;
        cout << "Ingresa el precio de tu producto 1: "; cin >> Prec1;
        cout << "Nombre de tu producto 2: "; cin >> Prod2;
        cout << "Ingresa el precio de tu producto 2: "; cin >> Prec2;
        cout << "Nombre de tu producto 3: "; cin >> Prod3;
        cout << "Ingresa el precio de tu producto 3: "; cin >> Prec3;
        ArrVendedor[cont].setProducto1(Prod1);
        ArrVendedor[cont].setPrecio1(Prec1);
        ArrVendedor[cont].setProducto2(Prod2);
        ArrVendedor[cont].setPrecio2(Prec2);
        ArrVendedor[cont].setProducto3(Prod3);
        ArrVendedor[cont].setPrecio3(Prec3);
    }
}   

int main()
{
    Comprador arrCompradores[20];
    int nComp;
    char opcion;
    do{
        cout << endl;
        cout << "a) Registrar compradores " << endl;
        cout << "b) Consultar datos compradores " << endl;
        cout << "c) Registrar Vendedores " << endl;
        cout << "d) Consultar Productos " << endl;
        cout << "e) Realizar Compra " << endl;
        cout << "X) Exit " << endl;
        cout << " opcion -> "; cin >> opcion;
        switch (opcion)
        {
        case 'a':
            IDatosComprador(arrCompradores, nComp);
            break;
        case 'b':
            for (int cont=0; cont < nComp; cont++)
            {
                arrCompradores[cont].print(); cout << "\n";
                arrCompradores[cont].getDireccion().print(); cout << "\n";
                cout << "\n";
            }
            break;
        case 'c':
            
            break;
        case 'd':
            consultaVendedoresPorDepartamento(listaVend, cantVend, listaDeptos, cantDeptos);
            break;
        case 'e':
            consultaVendedoresPorDepartamento(listaVend, cantVend, listaDeptos, cantDeptos);
            break;
        }

    }while (opcion != 'X');
    
    return 0;
}
