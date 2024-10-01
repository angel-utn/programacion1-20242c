/**
1) Hacer un programa que permita cargar 20 elementos en un vector. Listar el vector.
Calcular y mostrar el máximo valor del vector.
*/
#include <iostream>
using namespace std;

int main(){
   int vec[20], i, maximoValor;

   /// Cargar el vector
   cout << "Ingresar 20 números enteros: " << endl;
   for(i=0; i<20; i++){
      cin >> vec[i];
   }

   /// Listar el vector
   cout << endl << endl << "Listado del vector:" << endl;
   for(i=0; i<20; i++){
      cout << vec[i] << " ";
   }

   /// Buscar el máximo valor
   maximoValor = vec[0];
   for(i=1; i<20; i++){
      if (vec[i] > maximoValor){
         maximoValor = vec[i];
      }
   }

   /// Mostrar el máximo valor previamente buscado
   cout << endl << endl << "Máximo valor: " << maximoValor << endl;

	return 0;
}
