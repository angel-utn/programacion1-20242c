#include <iostream>

using namespace std;

void cargarNombre(string &nombre);
void mostrarNombre(string nombre);

int main(){

    string n;
    cargarNombre(n);
    mostrarNombre(n);

    return 0;
}

void cargarNombre(string &nombre){
    cout << "Ingrese su nombre: ";
    cin >> nombre;
}

void mostrarNombre(string nombre){
    cout << "El nombre ingresado es: " << nombre << endl;
}
