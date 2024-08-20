/**
  A partir de un nro entero que se ingresa por teclado. Determinar e informar:
  "Positivo", "Negativo" o "Cero".
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
   else if (numero < 0){
      cout << "El numero " << numero << " es negativo." << endl;
   }
   else{
      cout << "El numero es cero." << endl;
   }

   cout << "Fin del programa" << endl;

	return 0;
}
