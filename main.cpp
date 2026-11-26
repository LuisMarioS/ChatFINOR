#include <iostream>
using namespace std;


// Menu principal para las opciones
int menu(int opt) {
    
    cout << "==========================================" << endl;
    cout << "             .:ChatFINOR:." << endl << endl;
    cout << "1. Crear usuario." << endl;
    cout << "0. Salir." << endl;
    cout << "==========================================" << endl << endl;
    cout << "Ingrese opcion: "; cin >> opt;
    return opt;
}

int main() {
    // ChatFINOR
    int opt;
    cout << "\033[2J\033[1;1H"; // Limpia la pantalla
    do {
        opt = menu(opt);
        
        cin.ignore();
        
        switch (opt) {
            case 0: cout << "Saliendo del ChatFINOR..." << endl; break;
            case 1: cout << "Crear Usuario." << endl; break;
            default: cout << "Error." << endl;
        }
    } while (opt != 0);
}