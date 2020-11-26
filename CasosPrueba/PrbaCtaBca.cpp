#include<iostream>
#include "CtaBanc.h"
using namespace std;

int main() {
    char opcion;
    int noTarjeta, CVV, mes , año;
    double saldo;
    Fecha fechaExp;

    cin >> opcion;
    
    switch (opcion) {
        case 'a':
        {   
            cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> noTarjeta; cout << endl;
            cout << "Ingrese su CVV: "; cin >> CVV; cout << endl;
            cout << "Ingrese su Saldo: "; cin >> saldo; cout << endl;
            cout << "Ingrese el mes de expiración: "; cin >> mes; 
            cout << "Ingrese el año de expiración: "; cin >> año;
            fechaExp.setAño(año);
            fechaExp.setMes(mes);
            fechaExp.setDia(1);
            CtaBanc CtaOctavio(noTarjeta, CVV, saldo, fechaExp);
            CtaOctavio.
            break;
        }

        case 'b':
        {

            break;
        }

        case 'c':
        {

            break;
        }