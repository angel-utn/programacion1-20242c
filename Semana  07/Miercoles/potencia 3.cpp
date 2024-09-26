#include <iostream>
using namespace std;

/***
   Dado un numero entero que se ingresa por taclado, 
   mostrar dicho numero elevado al cubo

   DE:
      numero
   DS: 
      resultado del cuadrado del numero

   OP:
      restulado = numero * numero * numero
*/

int main() {
   int numero, resultado;
   
   cout << "Ingrese base: ";
   cin >> numero;
   
   resultado = numero * numero * numero;
   
   cout << numero << " ^ 3 = " << resultado;
   
   
   return 0;
}

