/**
1) Hacer un programa que permita cargar un vector de 100 elementos enteros.
Sus valores pueden ser positivos, negativos o ceros.
Luego, emitir dos vectores uno llamado "par" y otro llamado "impar" que contengan los elementos pares e
impares respectivamente.
Listar los elementos por pantalla de cada uno de los vectores resultantes.

*/
#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   const int TAM = 10;
   int vec[TAM], pares[TAM], impares[TAM];
   int cantidadPares, cantidadImpares;

   cout << "Ingresar " << TAM << " números enteros: " << endl;
   cargarVector(vec, TAM);
   cout << endl << "Vector original" << endl;
   mostrarVector(vec, TAM);

   cantidadPares = completarPares(vec, pares, TAM);
   cantidadImpares = completarImpares(vec, impares, TAM);

   cout << endl << "Elementos pares del vector original: ";
   mostrarVector(pares, cantidadPares);

   cout << endl << "Elementos impares del vector original: ";
   mostrarVector(impares, cantidadImpares);



   return 0;
}
