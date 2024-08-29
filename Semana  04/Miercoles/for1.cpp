#include <iostream>
using namespace std;

/***
  Entendimiento del Problema
  ---------------------------
  Hacer un programa que dado un numero entero, 
  Me muestre la tabla de multiplicacion de dicho.
  
  Anlisis
  -------
  DE:
    numero
  DS:
    retrusldo del  numero * 1
    retrusldo del  numero * 2
    retrusldo del  numero * 3
    ...
    retrusldo del  numero * 10
  Oper
    numero * 1
    ...
    numero * 10
    
  Estrategia
  Pedir el numero
  mostrar la tabla del 1 al 10
  
*/

int main(){
    int numero;
    
    cout << "Ingrese numero: ";
    cin >> numero;
    
    cout << numero * 1 << endl;
    cout << numero * 2 << endl;
    cout << numero * 3 << endl;
    cout << numero * 4 << endl;
    cout << numero * 5 << endl;
    cout << numero * 6 << endl;
    cout << numero * 7 << endl;
    cout << numero * 8 << endl;
    cout << numero * 9 << endl;
    cout << numero * 10 << endl;
    
    
    
    
    return 0;
}
