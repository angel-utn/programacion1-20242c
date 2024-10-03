#include <iostream>
using namespace std;

/**
Una empresa de impresiones dispone de un conjunto de registros que represetan las
impresiones creadas por sus 5 maquinas
Por cada dia y maquina se carga la siguiente informacion:
  - Numero de Maquina (1 - 5)
  - Dia
  - Cantidad de impresiones

El fin de la carga de datos se indica con con numero de mauina igual a cero

Informar:
	A- Por cada dia, la cantidad de impresiones que se realizaron
	
	B- Los dias donde se realizaron unicamente impresiones de la maquina 3
	
	Estructura principal es: While
	
		
	vector [ indice ] = 10
	
	vector [ dia - 1 ] = 
	
	dias   1 - 31
	vector 0 - 30
	
	20 articulos
	codigos 100 - 119
	vector[20]
	
	vector[codigo-100]
*/

int main()
{
  int numeroMaquina, dia, cantidadImpresiones;
  int cantidadDia[31]={0}; /// creo el vector y lo inicializo en cero todos sus elementos
  bool hayMaquina3[31]={false};
  bool otrasMaquinas[31]={false};
  
  
  cout << "Ingrese numero de maquina: ";
  cin >> numeroMaquina;

  while(numeroMaquina!=0)
  {
    cout << "Ingrese dia: ";
    cin >> dia;

    cout << "Ingrese cantidad de impresiones: ";
    cin >> cantidadImpresiones;

    cantidadDia[dia - 1] += cantidadImpresiones; /// por cada dia, acumulo
    
    if(numeroMaquina == 3){
        hayMaquina3[dia - 1] = true;
    }
    else{
        otrasMaquinas[dia - 1] = true;
    }
    
    /// procesos

    cout << "Ingrese numero de maquina: ";
    cin >> numeroMaquina;
  }
  
  
  for(int i=0; i<31; i++){
    cout << "Dia " <<  i + 1 << ": " << cantidadDia[i]<<endl; 
  }
  
  for(int i=0; i<31; i++){
    // if(hayMaquina3[i] && !otrasMaquinas[i]){
    if(hayMaquina3[i] == true && otrasMaquinas[i] == false){
      cout << "Dia " << i + 1 <<endl;    
    }
  }

  return 0;
}



