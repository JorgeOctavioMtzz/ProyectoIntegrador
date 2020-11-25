#include "Direccion.h"
#include "Fecha.h"
#include "CtaBanc.h"
#include "Producto.h"

class Comprador{

    private:
    string nombre;
    Fecha fechaRecibido;
    Direccion direccion;
    Producto nProducto;
    CtaBanc datosBancarios;

    public:
    Comprador();
    void seleccionarProducto(Producto nProducto);
    CtaBanc ingresarDatosBancarios();
    Direccion ingresarDireccion();
    
};

Comprador::Comprador(){
    nombre = "-";
    Fecha fechaRecibido;
    CtaBanc datosBancarios;
    Direccion direccion;
}

void Comprador::seleccionarProducto(Producto nProducto){
    Producto nProducto;

}

CtaBanc Comprador::ingresarDatosBancarios(){

    int nNoTarjeta, nCVV, nSaldo, año, mes, dia;
    

    cout << "Ingresa numero de tarjeta ";
    cin >> nNoTarjeta;
    cout << "Ingresa CVV: ";
    cin >> nCVV;
    cout << "Ingresa saldo: ";
    cin >> nSaldo;
    cout << "Ingresa fecha de expiracion (año, mes, dia) con numero";
    cin >> año >> mes >> dia;
    Fecha nFechaExp(int año, int mes, int dia);
    CtaBanc datosBancarios(int nNoTarjeta, int nCVV, int nSaldo, Fecha nFechaExp);

    return datosBancarios(nNoTarjeta, nCVV, nSaldo, nFechaExp(año, mes, dia));
}

Direccion Comprador::ingresarDireccion(){

    return direccion
}