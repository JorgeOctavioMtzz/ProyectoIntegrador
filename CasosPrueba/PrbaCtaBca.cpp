#include<iostream>
#include"CtaBanc.h"
#include<fstream>
using namespace std;

int main() {
    char opcion;
    string noTarjeta;
    int CVV, mes , año;
    double saldo;

    cin >> opcion;
    
    switch (opcion) {
        case 'a':
        {   
            CtaBanc Cta1;
            cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> noTarjeta; cout << endl;
            cout << "Ingrese su CVV: "; cin >> CVV; cout << endl;
            cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
            cout << "Ingrese el mes de expiración: "; cin >> mes; 
            cout << "Ingrese el año de expiración: "; cin >> año;
            Cta1.setNoTarjeta(noTarjeta); Cta1.setCVV(CVV); Cta1.setSaldo(saldo); Cta1.setMes(mes); Cta1.setAño(año);
            cout << Cta1.getNoTarjeta() << endl << Cta1.getCVV() << endl << Cta1.getSaldo() << endl << Cta1.getMes() << "/" << Cta1.getAño() << endl;
            break;
        }

        case 'b':
        {
            cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> noTarjeta; cout << endl;
            cout << "Ingrese su CVV: "; cin >> CVV; cout << endl;
            cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
            cout << "Ingrese el mes de expiración: "; cin >> mes; 
            cout << "Ingrese el año de expiración: "; cin >> año;
            CtaBanc Cta2(noTarjeta, CVV, saldo, mes, año);
            cout << Cta2.getNoTarjeta() << endl << Cta2.getCVV() << endl << Cta2.getSaldo() << endl << Cta2.getMes() << "/" << Cta2.getAño() << endl;
            break;
        }

        case 'c':
        {
            ifstream f; f.open("Ctaba.txt");
            CtaBanc Cta3;
            while (f >> noTarjeta >> CVV >> saldo >> mes >> año)
            {   
                Cta3.setNoTarjeta(noTarjeta); Cta3.setCVV(CVV); Cta3.setSaldo(saldo); Cta3.setMes(mes); Cta3.setAño(año);
            }
            cout << Cta3.getNoTarjeta() << endl << Cta3.getCVV() << endl << Cta3.getSaldo() << endl << Cta3.getMes() << "/" << Cta3.getAño() << endl;
            break;
        }
    }
}