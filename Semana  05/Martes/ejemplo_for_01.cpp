/**
  A partir de una lista de 5 números enteros que se ingresan por teclado. Calcular e informar cuántos
  fueron positivos. Informar con un cartel cada vez que se ingresa el número 8.
  Informar también el valor más grande ingresado.

  Datos de entrada:
  ----------------
  5 números enteros --> Ingresados en n de forma secuencial

  Procesamiento:
  --------------
  Ingresar los nros en un ciclo exacto
  - Si es 8 --> Mostrar cartel
  - Si es > 0 --> Contar cantPositivos
  - Si el n > mayorValor --> Actualizar el valor de mayorValor

  Información de salida:
  ----------------------
  Un cartel que se ingresó el número 8 --> string "Ingresaste 8" (durante la carga)
  Cuántos de esos 5 números fueron positivos --> int cantPositivos (al final de la carga)
  Informar el valor más grande --> int mayorValor (al final de la carga)
*/

#include <iostream>
using namespace std;

int main(){

   int i, n, cantPositivos = 0, mayorValor;

   for(i=1; i<=5; i++){
      cout << "Ingresar número: ";
      cin >> n;

      if (n == 8){
         cout << " :::::: Ingresaste un ocho :::::" << endl;
      }

      if (n > 0){
         cantPositivos++;
      }

      if (i==1 || n > mayorValor){
         mayorValor = n;
      }

   }
   cout << endl;
   cout << "Cantidad de positivos: " << cantPositivos << endl;
   cout << "Mayor valor: " << mayorValor << endl;

	return 0;
}
