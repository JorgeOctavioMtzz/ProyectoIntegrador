#include<iostream>
#include <string>
using namespace std;

class Direccion
{
    public:
        Direccion(); // Constructor default 
        Direccion(string NPa, string NEs, string NCiu, string NCo, string NCa, int NNC, int NCP); // Constructor con parametros

        // Asignar valores a los atributos
        void setPais(string NPa);
        void setEstado(string NEs);
        void setCiudad(string NCiu);
        void setColonia(string NCo);
        void setCalle(string NCa);
        void setnumCasa(int NNC);
        void setcodPostal(int NCP);

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
Direccion :: Direccion()
{
    pais = "México";
    estado = "Coahuila";
    ciudad = "Saltillo";
    colonia = "Lomas de Lourdes";
    calle = "Paseo de Los Gavilanes";
    numCasa = 480;
    codPostal = 25090;
}

Direccion :: Direccion(string NPa, string NEs, string NCiu, string NCo, string NCa, int NNC, int NCP)
{
    pais = NPa;
    estado = NEs;
    ciudad = NCiu;
    colonia = NCo;
    calle = NCa;
    numCasa = NNC;
    codPostal = NCP;
}

void Direccion :: setPais(string NPa) 
{ 
    pais = NPa; 
}

void Direccion :: setEstado(string NEs) 
{ 
    estado = NEs;
}

void Direccion :: setCiudad(string NCiu) 
{ 
    ciudad = NCiu;
}

void Direccion :: setColonia(string NCo) 
{ 
    colonia = NCo;
}

void Direccion :: setCalle(string NCa) 
{ 
    calle = NCa;
}

void Direccion :: setnumCasa(int NNC) 
{ 
    numCasa = NNC;
}

void Direccion :: setcodPostal(int NCP) 
{ 
    codPostal = NCP;
}

string Direccion :: getPais() 
{ 
    return pais; 
}
string Direccion :: getEstado() 
{ 
    return estado; 
}
string Direccion :: getCiudad() 
{ 
    return ciudad; 
}
string Direccion :: getColonia() 
{ 
    return colonia; 
}
int Direccion :: getnumCasa() 
{ 
    return numCasa; 
}
int Direccion :: getCP()
{ 
    return codPostal;
}
