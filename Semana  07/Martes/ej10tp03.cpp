/**
  Hacer un programa para ingresar una lista de 10 números enteros, luego informar el máximo
  y la posición del máximo en la lista.
  En caso de “empates” considerar la primera aparición.

   Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listará Máximo 35 Posición 7.
   Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listará Máximo 55 Posición 7.
   Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listará Máximo -6 Posición 8.

*/
#include <iostream>
using namespace std;

int main(){
   int numero, i, maximo = 0, posMaximo;

   for(i=1; i<=10; i++){
      cout << "Ingresar número: ";
      cin >> numero;

      if (i==1 || numero > maximo){
         maximo = numero;
         posMaximo = i;
      }
   }

   cout << endl << "El valor máximo es: " << maximo << endl;
   cout << "La posición del máximo es : " << posMaximo << endl;

	return 0;
}
