#include "Fecha.h"

class CtaBanc{

    private:
    int noTarjeta, CVV;
    double saldo;
    Fecha fechaExp;

    public:
    CtaBanc();
    CtaBanc(int nNoTarjeta, int nCVV, int nSaldo, Fecha nFechaExp);
    void setNoTarjeta(int nNoTarjeta);
    void setCVV(int nCVV);
    void setSaldo(double nSaldo);
    void setFechaExp(Fecha nFechaExp);

    int getNoTarjeta();
    int getCVV();
    double getSaldo();
    Fecha getFechaExp();

};

CtaBanc::CtaBanc(){
    Fecha fechaTemp;
    noTarjeta = 1234123412341234;
    CVV = 123;
    saldo = 0.00;
    fechaExp = fechaTemp;
}

CtaBanc::CtaBanc(int nNoTarjeta, int nCVV, int nSaldo, Fecha nFechaExp){
    noTarjeta = nNoTarjeta;
    CVV = nCVV;
    saldo = nSaldo;
    fechaExp = nFechaExp;
}

void CtaBanc::setNoTarjeta(int nNoTarjeta){
    noTarjeta = nNoTarjeta;
}

void CtaBanc::setCVV(int nCVV){
    CVV = nCVV;
}

void CtaBanc::setSaldo(double nSaldo){
    saldo = nSaldo;
}

void CtaBanc::setFechaExp(Fecha nFechaExp){
    fechaExp = nFechaExp;
}

int CtaBanc::getNoTarjeta(){
    return noTarjeta;
}

int CtaBanc::getCVV(){
    return CVV;
}

double CtaBanc::getSaldo(){
    return saldo;
}

Fecha CtaBanc::getFechaExp(){
    fechaExp.print();
}