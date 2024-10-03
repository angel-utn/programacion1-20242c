#include <iostream>
using namespace std;

/// declaracion de las funciones
void cargarDatos(int cantidad[], bool hay3[], bool hayOtros[]);
void mostrarCantidadImpresionesDia(int cantidad[]);
void diasUnicamenteMaquina3(bool hay3[], bool hayOtros[]);

int main()
{
  int cantidadDia[31]={0}; /// creo el vector y lo inicializo en cero todos sus elementos
  bool hayMaquina3[31]={false};
  bool otrasMaquinas[31]={false};
  
  cargarDatos(cantidadDia, hayMaquina3, otrasMaquinas);
  
  mostrarCantidadImpresionesDia(cantidadDia);
  
  diasUnicamenteMaquina3(hayMaquina3, otrasMaquinas);
  
  return 0;
}

/// definiciones de las funciones

void cargarDatos(int cantidad[], bool hay3[], bool hayOtros[]){
  int numeroMaquina, dia, cantidadImpresiones;
  
  cout << "Ingrese numero de maquina: ";
  cin >> numeroMaquina;

  while(numeroMaquina!=0)
  {
    cout << "Ingrese dia: ";
    cin >> dia;

    cout << "Ingrese cantidad de impresiones: ";
    cin >> cantidadImpresiones;

    cantidad[dia - 1] += cantidadImpresiones; /// por cada dia, acumulo
    
    if(numeroMaquina == 3){
        hay3[dia - 1] = true;
    }
    else{
        hayOtros[dia - 1] = true;
    }

    cout << "Ingrese numero de maquina: ";
    cin >> numeroMaquina;
  }
}
void mostrarCantidadImpresionesDia(int cantidad[]){
  for(int i=0; i<31; i++){
    cout << "Dia " <<  i + 1 << ": " << cantidad[i]<<endl; 
  }
  
}
void diasUnicamenteMaquina3(bool hay3[], bool hayOtros[]){
  for(int i=0; i<31; i++){
    if(hay3[i] == true && hayOtros[i] == false){
      cout << "Dia " << i + 1 <<endl;    
    }
  }
}



