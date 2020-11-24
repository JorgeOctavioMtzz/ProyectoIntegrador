#ifndef Fecha_h
#define Fecha_h

#include <iostream>
#include <string>
using namespace std;

class Fecha{
    private:

    int año, mes, dia;

    public:

    Fecha();
    Fecha(int nAño, int nMes, int nDia);
    void setAño(int NAño);
    void setMes(int NMes);
    void setDia(int NDia);

    int getAño();
    int getMes();
    int getDia();

    void print();

};
Fecha::Fecha(){
    año = 0;
    mes = 0;
    dia = 0;

}
Fecha::Fecha(int nAño, int nMes, int nDia){
    año = nAño;
    mes = nMes;
    dia = nDia;
}

void Fecha::setAño(int NAño){
    año = NAño;
}

void Fecha::setMes(int NMes){
    mes = NMes;
}

void Fecha::setDia(int NDia){
    dia = NDia;
}

int Fecha::getAño(){
    return año;
}

int Fecha::getMes(){
    return mes;
}

int Fecha::getDia(){
    return dia;
}

void Fecha::print(){
    cout << dia << " " << mes << " " << año << endl;
}

#endif /* Fecha.h */