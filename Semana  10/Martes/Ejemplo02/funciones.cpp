#include <iostream>
using namespace std;

#include "funciones.h"

void mostrarVector(float vec[], int tam){
   int i;
   for(i=0; i<tam; i++){
      cout << vec[i] << endl;
   }
}

void cargarGastos(float gastosxCategoria[], bool gastoEnAlimentacion[], bool gastoEnLimpieza[]){
   int dia, idCategoria;
   float importe;

   cout << "Día: ";
   cin >> dia;

   while (dia != 0){
      cout << "ID Categoría: ";
      cin >> idCategoria;
      cout << "Importe: $";
      cin >> importe;

      /// A, B y C
      gastosxCategoria[idCategoria-1] += importe;
      /// D
      switch(idCategoria){
         case 2: // Alimentacion
            gastoEnAlimentacion[dia-1] = true;
         break;
         case 3: // Limpieza
            gastoEnLimpieza[dia-1] = true;
         break;
      }

      cout << "----------------------" << endl;
      cout << "Día: ";
      cin >> dia;
   }


   cout << endl << endl;
}

int buscarPosicionMaximo(float vec[], int tam){
   int posicionMaximo = 0, i;

   for(i=1; i<tam; i++){
      if(vec[i] > vec[posicionMaximo]){
         posicionMaximo = i;
      }
   }
   return posicionMaximo;
}


void puntoA(float gastosxCategoria[], string nombresCategorias[], int tam){
   int i;
   cout << "PUNTO A " << endl;
   cout << "--------------------------" << endl;
   for(i=0; i<tam; i++){
      cout << nombresCategorias[i] << "\t" << "$ " << gastosxCategoria[i] << endl;
   }
   cout << endl << endl;
}

void puntoB(float gastosxCategoria[], string nombresCategorias[], int tam){
   int i, posicionMaximo;
   cout << "PUNTO B " << endl;
   cout << "--------------------------" << endl;
   posicionMaximo = buscarPosicionMaximo(gastosxCategoria, tam);
   cout << "Categoría: " << nombresCategorias[posicionMaximo] << endl;
   cout << "Gastos   : $" << gastosxCategoria[posicionMaximo] << endl;

   cout << endl << endl;
}

void puntoC(float gastosxCategoria[], int tam){
   int i, cantidadCategoriasSinGastos = 0;

   for(i = 0; i < tam ; i++){
      if (gastosxCategoria[i] == 0){
         cantidadCategoriasSinGastos++;
      }
   }

   cout << "PUNTO C " << endl;
   cout << "--------------------------" << endl;
   cout << "Cantidad de categorías sin gastos: " << cantidadCategoriasSinGastos << endl << endl;
}

void puntoD(bool gastoEnAlimentacion[], bool gastoEnLimpieza[], int tam){
   int i;
   cout << "PUNTO D " << endl;
   cout << "--------------------------" << endl;
   cout << "Días en los que se gastó en alimentación pero no en limpieza: " << endl;
   for(i = 0; i <tam ; i++){
      if (gastoEnAlimentacion[i] == true && gastoEnLimpieza[i] == false){
         cout << i+1 << endl;
      }
   }
}

