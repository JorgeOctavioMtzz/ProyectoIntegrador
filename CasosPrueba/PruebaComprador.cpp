#include<iostream>
#include<string>
#include "/Users/octavio/Desktop/CPP/ProyectoIntegrador/ProyectoIntegrador/Comprador.h"
#include<fstream>
using namespace std;
int main()
{
    string pais, estado, ciudad, colonia, calle, noTarjeta, USername;
    char opcion;
    int CVV, mes , año, numCasa, codPostal;
    double saldo;
    cin >> USername;

    if (USername == "Octavio")
    {
        opcion = 'a';
    }
    else if (USername == "Tlanetzi")
    {
        opcion = 'b';
    }
    else if (USername == "Yolanda")
    {
        opcion = 'c';
    }
    else if (USername == "Poncho")
    {
        opcion = 'd';
    }
    else if (USername == "Juan")
    {
        opcion = 'e';
    }

    switch (opcion) {
        case 'a':  // constructor default y métodos de acceso
        {
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
            Comprador Comprador1;
            ifstream f; f.open("Octavio.txt");
            CtaBanc CtaDatab;
            while (f >> noTarjeta >> CVV >> saldo >> mes >> año)
            {   
                CtaDatab.setNoTarjeta(noTarjeta); CtaDatab.setCVV(CVV); CtaDatab.setSaldo(saldo); CtaDatab.setMes(mes); CtaDatab.setAño(año);
            }
            cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> noTarjeta; cout << endl;
            cout << "Ingrese su CVV: "; cin >> CVV; cout << endl;
            cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
            cout << "Ingrese el mes de expiración: "; cin >> mes; cout << endl;
            cout << "Ingrese el año de expiración: "; cin >> año; cout << endl;
            CtaBanc CtaIngresada(noTarjeta, CVV, saldo, mes, año);
            if ((CtaIngresada.getNoTarjeta() == CtaDatab.getNoTarjeta()) && (CtaIngresada.getCVV() == CtaDatab.getCVV()) && (CtaIngresada.getMes() == CtaDatab.getMes()) && (CtaIngresada.getAño() == CtaDatab.getAño()))
            {
                Comprador Comprador1("Octavio", Ndireccion, CtaDatab);

            }
            else
            {
                cout << "Error los Datos Bancarios no Coinciden con los proporcionados por el banco...";
            }
            
            break;
        }
    }
}