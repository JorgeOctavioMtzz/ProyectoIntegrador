#ifndef CtaBanc_h
#define CtaBanc_h
using namespace std;

class CtaBanc{
    private:
    // Declaracion de los atributos de la clase
    string noTarjeta;
    int CVV, mes, año;
    double saldo;

    public:
    CtaBanc(); // Constructor default 
    CtaBanc(string nNoTarjeta, int nCVV, double nSaldo, int nAño, int nMes); // Constructor con parametros
    CtaBanc(string nNoTarjeta, int nCVV, int nAño, int nMes); 

    // Asignar valores a los atributos
    void setNoTarjeta(string nNoTarjeta);
    void setCVV(int nCVV);
    void setSaldo(double nSaldo);
    void setMes(int nMes);
    void setAño(int nAño);

    // Regresar los valores de los atributos
    string getNoTarjeta();
    int getCVV();
    double getSaldo();
    int getMes();
    int getAño();
};
// Implementacion de los métodos
CtaBanc::CtaBanc(){
    noTarjeta = "1234123412341234";
    CVV = 123;
    saldo = 0.00;
    año = 99;
    mes = 1;
}

CtaBanc::CtaBanc(string nNoTarjeta, int nCVV, double nSaldo, int nMes, int nAño){
    noTarjeta = nNoTarjeta;
    CVV = nCVV;
    saldo = nSaldo;
    año = nAño;
    mes = nMes;
}

CtaBanc::CtaBanc(string nNoTarjeta, int nCVV, int nMes, int nAño){
    noTarjeta = nNoTarjeta;
    CVV = nCVV;
    saldo = 0.0;
    año = nAño;
    mes = nMes;
}

void CtaBanc::setNoTarjeta(string nNoTarjeta){
    noTarjeta = nNoTarjeta;
}

void CtaBanc::setCVV(int nCVV){
    CVV = nCVV;
}

void CtaBanc::setSaldo(double nSaldo){
    saldo = nSaldo;
}

void CtaBanc::setMes(int nMes){
    mes = nMes;
}

void CtaBanc::setAño(int nAño){
    año = nAño;
}

string CtaBanc::getNoTarjeta(){
    return noTarjeta;
}

int CtaBanc::getCVV(){
    return CVV;
}

double CtaBanc::getSaldo(){
    return saldo;
}

int CtaBanc::getMes(){
    return mes;
}

int CtaBanc::getAño(){
    return año;
}
#endif