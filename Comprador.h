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

    CtaBanc leerDatosBanc(); // eliminar
    void PedirDatosBanc();

    // Regresar los valores de los atributos
    string getName();
    Direccion getDireccion();
    CtaBanc getDtaBanc();

    // Asignar valores a los atributos
    void setDireccion();
    void setNombre(string Username);

    void DatosValidados(); //eliminar
    void Error(); //eliminar
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

CtaBanc Comprador::leerDatosBanc()
{

    string nNoTarjeta;
    int nCVV, año, mes;
    double nSaldo;
    CtaBanc BancBase;
    ifstream f; f.open("Ctaba.txt");
    while (f >> nNoTarjeta >> nCVV >> nSaldo >> mes >> año)
    {
        CtaBanc BancBase(string nNoTarjeta, int nCVV, double nSaldo, int nMes, int nAño);
    }
    return BancBase;
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

void Comprador::PedirDatosBanc()
{
    string nUNoTarjeta;
    int nUCVV, Uaño, Umes;
    double nSaldo;
    CtaBanc CtaUser;
    cout << "Ingrese los 16 dígitos de su tarjeta de credito: "; cin >> nUNoTarjeta; cout << endl;
    cout << "Ingrese los 3 numeros de atras de su tarjeta de credito: "; cin >> nUCVV; cout << endl;
    cout << "Mes de expiración: "; cin >> Umes; cout << endl;
    cout << "Año de expiración: "; cin >> Uaño; cout << endl;
    CtaUser.setNoTarjeta(nUNoTarjeta);
    CtaUser.setCVV(nUCVV);
    CtaUser.setMes(Umes);
    CtaUser.setAño(Uaño);
    datosBancarios = CtaUser;
}

void Comprador :: setDireccion(){
    string pais, estado, ciudad, colonia, calle;
    int numCasa, codPostal;

    cout << "País: "; cin >> pais; cout << endl;
    cout << "Estado: "; cin >> estado; cout << endl;
    cout << "Ciudad: "; cin >> ciudad; cout << endl;
    cout << "Colonia: "; cin >> colonia; cout << endl;
    cout << "Calle: "; cin >> calle; cout << endl;
    cout << "Número de Casa: "; cin >> numCasa; cout << endl;
    cout << "Codigo Postal: "; cin >> codPostal; cout << endl;
    direction.setPais(pais);
    direction.setEstado(estado);
    direction.setCiudad(ciudad);
    direction.setColonia(colonia);
    direction.setnumCasa(numCasa);
    direction.setcodPostal(codPostal);
}

//Aqui va la validos

#endif