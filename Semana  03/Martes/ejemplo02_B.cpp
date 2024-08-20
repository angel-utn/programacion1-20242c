/**
  A partir de un nro entero que se ingresa por teclado. Determinar e informar:
  "Positivo", "Negativo" o "Cero".

  Aclaración: No utilizar else
*/

#include <iostream>
using namespace std;

int main(){
   int numero;
   cout << "Ingresar numero: ";
   cin >> numero;

   if (numero > 0){
      cout << "El numero " << numero << " es positivo." << endl;
   }
   if (numero < 0){
      cout << "El numero " << numero << " es negativo." << endl;
   }
   if (numero == 0){
      cout << "El numero es cero." << endl;
   }

   /// NOTA: No es tan eficiente como ejemplo02.cpp porque hace más preguntas de las necesarias.

	return 0;
}
