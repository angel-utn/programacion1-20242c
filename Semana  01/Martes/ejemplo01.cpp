#include <iostream>
using namespace std;

int main(){
  int num1, num2, resultado;
  cout << "Ingresar un nro entero: ";
  cin >> num1;
  cout << "Ingresar otro nro entero: ";
  cin >> num2;
  resultado = num1 + num2;

  // Estas líneas muestran por pantalla el resultado
  /*
  cout << endl;
  cout << endl;
  cout << "El resultado de la suma es: ";
  cout << resultado;
  */
  cout << endl << endl << "El resultado de la suma es: " << resultado;

  return 0;
}
