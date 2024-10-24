#include <iostream> 
#include "funciones.h"

using namespace std;

/**
  pasaje por valor
  pasaje por referencia
  pasaje por direcion 
*/
void cambiar(int &numero){
  numero = 13;
}

void cargarVector(int vNumeros[], int cantidad){
  
  cambiar(cantidad);
  for (int i=0; i<cantidad;i++){
      cout << "Ingrese numero: ";
      cin >> vNumeros[i];
  }
}


void cargar(string nombre){
  cout << "Ingrese nombre:" ;
  cin >> nombre;
}
