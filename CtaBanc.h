#ifndef CtaBanc_h
#define CtaBanc_h
class CtaBanc{

    private:
    string noTarjeta;
    int CVV, mes, año;
    double saldo;

    public:
    CtaBanc();
    CtaBanc(string nNoTarjeta, int nCVV, double nSaldo, int nAño, int nMes);
    CtaBanc(string nNoTarjeta, int nCVV, int nAño, int nMes);
    void setNoTarjeta(string nNoTarjeta);
    void setCVV(int nCVV);
    void setSaldo(double nSaldo);
    void setMes(int nMes);
    void setAño(int nAño);

    string getNoTarjeta();
    int getCVV();
    double getSaldo();
    int getMes();
    int getAño();
};

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

void CtaBanc::setMes(int nAño){
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