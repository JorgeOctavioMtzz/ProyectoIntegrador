#include<iostream>
#include <string>
using namespace std;

class Direcciontwo
{
    public:
        Direcciontwo(); // Constructor default 
        Direcciontwo(string NPa, string NEs, string NCiu, string NCo, string NCa, int NNC, int NCP); // Constructor con parametros

        // Asignar valores a los atributos
        void setPais(string NPa);
        void setEstado(string NEs);
        void setCiudad(string NCiu);
        void setColonia(string NCo);
        void setCalle(string NCa);
        void setnumCasa(int NNC);
        void setcodPostal(int NCP);
        void print();

        // Regresar los valores de los atributos
        string getPais();
        string getEstado();
        string getCiudad();
        string getColonia();
        string getCalle();
        int getnumCasa();
        int getCP();

    private:
    // Declaracion de los atributos de la clase
        string pais, estado, ciudad, colonia, calle;
        int numCasa, codPostal;

};
// Implementacion de los métodos
Direcciontwo :: Direcciontwo()
{
    pais = "México";
    estado = "Coahuila";
    ciudad = "Saltillo";
    colonia = "Lomas de Lourdes";
    calle = "Paseo de Los Gavilanes";
    numCasa = 480;
    codPostal = 25090;
}

Direcciontwo :: Direcciontwo(string NPa, string NEs, string NCiu, string NCo, string NCa, int NNC, int NCP)
{
    pais = NPa;
    estado = NEs;
    ciudad = NCiu;
    colonia = NCo;
    calle = NCa;
    numCasa = NNC;
    codPostal = NCP;
}

void Direcciontwo :: setPais(string NPa) 
{ 
    pais = NPa; 
}

void Direcciontwo :: setEstado(string NEs) 
{ 
    estado = NEs;
}

void Direcciontwo :: setCiudad(string NCiu) 
{ 
    ciudad = NCiu;
}

void Direcciontwo :: setColonia(string NCo) 
{ 
    colonia = NCo;
}

void Direcciontwo :: setCalle(string NCa) 
{ 
    calle = NCa;
}

void Direcciontwo :: setnumCasa(int NNC) 
{ 
    numCasa = NNC;
}

void Direcciontwo :: setcodPostal(int NCP) 
{ 
    codPostal = NCP;
}

string Direcciontwo :: getPais() 
{ 
    return pais; 
}
string Direcciontwo :: getEstado() 
{ 
    return estado; 
}
string Direcciontwo :: getCiudad() 
{ 
    return ciudad; 
}
string Direcciontwo :: getColonia() 
{ 
    return colonia; 
}
int Direcciontwo :: getnumCasa() 
{ 
    return numCasa; 
}
int Direcciontwo :: getCP()
{ 
    return codPostal;
}

void Direcciontwo :: print()
{
    cout << ciudad << ", " << estado << ", " << pais << endl;
    cout << calle << ", #" << numCasa << ", " << colonia << endl;
    cout << codPostal << endl;
}