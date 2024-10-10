#include <iostream>
using namespace std;
#include "funciones.h"


void cargarVector(int listaNumeros[], int tam){
   int i;
   for(i=0; i<tam; i++){
      cin >> listaNumeros[i];
   }
}

void mostrarVector(int listaNumeros[], int tam){
   int i;
   for(i=0; i<tam; i++){
      cout << listaNumeros[i] << " ";
   }
}

int completarPares(int listaNumeros[], int listaPares[], int tam){
   int i, contPares = 0;

   for(i=0; i<tam; i++){
      bool esNumeroPar = esPar(listaNumeros[i]);

      if (esNumeroPar == true){
         listaPares[contPares] = listaNumeros[i];
         contPares++;
      }
   }
   return contPares;
}

int completarImpares(int listaNumeros[], int listaImpares[], int tam){
   int i, contImpares = 0;

   for(i=0; i<tam; i++){
      bool esNumeroPar = esPar(listaNumeros[i]);

      if (esNumeroPar == false){
         listaImpares[contImpares] = listaNumeros[i];
         contImpares++;
      }
   }
   return contImpares;
}

bool esPar(int numero){
   if (numero % 2 == 0){
      return true;
   }
   else{
      return false;
   }
}

