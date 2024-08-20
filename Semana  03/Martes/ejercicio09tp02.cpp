/**
9 (Enunciado: modificado en clase)
Hacer un programa para ingresar siete números distintos entre sí y listar el máximo de ellos.
*/
#include <iostream>
using namespace std;

int main(){
   int numero, mayorValor;
   cout << "Ingresar numero: " << endl;
   cin >> numero;
   mayorValor = numero;

   cout << "Ingresar numero: " << endl;
   cin >> numero;
   if (numero > mayorValor){
      mayorValor = numero;
   }

   cout << "Ingresar numero: " << endl;
   cin >> numero;
   if (numero > mayorValor){
      mayorValor = numero;
   }

   cout << "Ingresar numero: " << endl;
   cin >> numero;
   if (numero > mayorValor){
      mayorValor = numero;
   }

   cout << "Ingresar numero: " << endl;
   cin >> numero;
   if (numero > mayorValor){
      mayorValor = numero;
   }

   cout << "Ingresar numero: " << endl;
   cin >> numero;
   if (numero > mayorValor){
      mayorValor = numero;
   }

   cout << "Ingresar numero: " << endl;
   cin >> numero;
   if (numero > mayorValor){
      mayorValor = numero;
   }

   cout << endl << "::: El mayor valor es: " << mayorValor << endl;

	return 0;
}
