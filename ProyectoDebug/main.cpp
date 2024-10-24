#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int n;
    //int vec[10];
    string nombre, apellido;
    
    cout << "Ingrese numero: ";
    cin >> n;

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nombre);
        
    cout << "Ingrese apellido: ";
    getline(cin, apellido);
    
    cout << "Numero: " << n << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    
    
  
  //cout << vec << endl;
  
   // return  0;
    //cargarVector(vec, 10);
    
    //n = 10;
    
    //cambiar(n);
    
    //cout << n << endl;
    
    //cout << vec[7] << endl;
    
    system("pause");
    return 0;
}
