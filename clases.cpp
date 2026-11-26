// Todas las clases que necesitaremos
#include <iostream>
#include <string>
using namespace std;

class Usuario {
    private:
        int id; string nombre; string carrera; int registro;
    public:
        Usuario(int id, const string nombre, const string carrera, const int registro) : id(id), nombre(nombre), carrera(carrera), registro(registro) {}
        int getID() const { return id; }
        string getNombre() const { return nombre; }
        string getCarrera() const { return carrera; }
        int getRegistro() const { return registro; }
        
        void mostrar() {
            cout << "Nombre:   " << nombre << "." << endl;
            cout << "Registro: " << registro << "." << endl;
            cout << "Carrera:  " << carrera << "." << endl;
        }
};

class Grupo {};

class Mensaje {
    private:
        int id;
        string emisor;
        string destino;
        string contenidoOriginal;
        string contenidoVisible;
        bool esGrupal;
        bool infringeNormas;
    public:
        Mensaje(int id, const string emisor, const string destino, const string original, const string visible, bool esGrupal, bool infringeNormas) : 
        id(id), emisor(emisor), destino(destino), contenidoOriginal(original), contenidoVisible(visible), esGrupal(esGrupal), infringeNormas(infringeNormas) {}
        int getID() const { return id; }
        string getEmisor() const { return emisor; }
        string getDestino() const { return destino; }
        string getContenidoVisible() const { return contenidoVisible; }
        bool getEsGrupal() const { return esGrupal; }
        bool tieneInfraccion() const { return infringeNormas; }
        
        void mostrar() const {
            string tipo = esGrupal ? "[GRUPO: " + destino + "]" : "[PRIVADO -> " + destino + "]";
            string alerta = infringeNormas ? "[MODERADO]" : "";
            cout << "#" << id << " " << tipo << alerta << "\n";
            cout << "" << emisor << ": " << contenidoVisible << "\n";
        }
};