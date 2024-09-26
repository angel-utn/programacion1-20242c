#include <iostream>
using namespace std;
/***







dado un lista de 10 numeros informar cuantos de ellos son mayores al promedio

DE:
10 numeros;
DS: 
Cantidad

/// Que deberiamos utilizar?
contador para contar los mayores al promedio


//// ESTRATEGIA
Pedir los 10 numeros
Sumar los 10 numeros
calculo el promedio
contar los mayores al promedio
Mostrar la catiadad
*/

int main() {
   const int CANTIDAD_NUMEROS = 5;
   float vNumeros[CANTIDAD_NUMEROS];
   float sumaTotal, promedio;
   int cantidad = 0;
   
   /// recorro el vector para cargar sus elementos
   for(int i=0; i<CANTIDAD_NUMEROS; i++){
      cout << "Ingrese numero: ";
      cin >> vNumeros[i];
   }

   /// recorro el vector para sumar todos sus elementos
   sumaTotal = 0;
   for(int i=0; i<CANTIDAD_NUMEROS; i++){
      sumaTotal += vNumeros[i];
   }
   
   promedio = sumaTotal / CANTIDAD_NUMEROS;
   
   for(int i=0; i<CANTIDAD_NUMEROS; i++){
      if(vNumeros[i] > promedio){
         cantidad++;
      }
   }
   
   
   cout << "La cantidad de nuemros mayores al promedio es: " << cantidad;
   
   return 0;
}

