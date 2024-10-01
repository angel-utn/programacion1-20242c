/**
1) Hacer un programa que permita cargar 20 elementos en un vector. Listar el vector.
Calcular y mostrar el máximo valor del vector.
*/
#include <iostream>
using namespace std;

void CargarVector(int vec[], int tamanio);
void MostrarVector(int vec[], int tamanio);
int BuscarMaximoValor(int listaValores[], int tamanio);

int main(){
   const int TAM = 5;
   int vec[TAM], i, maximoValor;

   cout << "Ingresar "<< TAM << " números enteros: " << endl;
   CargarVector(vec, TAM);

   cout << endl << endl << "Listado del vector:" << endl;
   MostrarVector(vec, TAM);

   maximoValor = BuscarMaximoValor(vec, TAM);

   /// Mostrar el máximo valor previamente buscado
   cout << endl << endl << "Máximo valor: " << maximoValor << endl;

	return 0;
}

int BuscarMaximoValor(int listaValores[], int tamanio){

   int maximoValor = listaValores[0], i;

   for(i=1; i<tamanio; i++){
      if (listaValores[i] > maximoValor){
         maximoValor = listaValores[i];
      }
   }

   return maximoValor;

}

void CargarVector(int vec[], int tamanio){
   int i;
   for(i=0; i<tamanio; i++){
      cin >> vec[i];
   }
}

void MostrarVector(int vec[], int tamanio){
   int i;
   for(i=0; i<tamanio; i++){
      cout << vec[i] << " ";
   }
}

