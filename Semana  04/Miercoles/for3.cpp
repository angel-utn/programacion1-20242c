#include <iostream>
using namespace std;

/***
  hacer un programa que muestre del 1 al 20, todos los numeros pares
*/

int main()
{
  int numero;

  /// Pedir un numero
  cout << "Ingrese numero: ";
  cin >> numero;

  /// Armar la tabla de multiplicacion
  for(int i=1; i<=10 ; i++)
  {
    cout << numero << " x " << i << " = " << numero * i << endl;
    
  }

  return 0;
}
