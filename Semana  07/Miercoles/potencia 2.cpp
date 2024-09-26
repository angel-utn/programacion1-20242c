#include <iostream>
using namespace std;

/***
   Dado un numero entero que se ingresa por taclado, 
   mostrar dicho numero elevado al cuadrado

   DE:
      numero
   DS: 
      resultado del cuadrado del numero

   OP:
      restulado = numero * numero
*/

int main() {
   int numero, resultado;
   
   cout << "Ingrese base: ";
   cin >> numero;
   
   resultado = numero * numero;
   
   cout << numero << " ^ 2 = " << resultado;
   
	
	return 0;
}

