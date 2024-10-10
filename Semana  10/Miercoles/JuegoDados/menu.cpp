#include <iostream>
#include "menu.h"
#include "juego.h"

using namespace std;

int seleccionarOpcion()
{
  int opcion;
  cout << "--- MENU PRINCIPAL --- " << endl;
  cout << "1- Jugar" << endl;
  cout << "2- Estadistica" << endl;
  cout << "0- Salir" << endl;
  cout << "----------------" << endl;
  cout << "Opcion: ";
  cin >> opcion;

  return opcion;
}

void estadisticas(int estadisticasGanador, int estadisticasRondas){
  // TODO: Agregar para que cuando sea cero muestre un menjase de que aun no se realizaron jugadas
  cout << "El jugador #" << estadisticasGanador << " gano en " << estadisticasRondas << " rondas" << endl;
}

void ejecutarOpcion(int opcion, int &estadisticasGanador, int &estadisticasRondas)
{
  switch(opcion)
  {
  case 1:
    jugar(estadisticasGanador, estadisticasRondas);
    break;
  case 2:
    estadisticas(estadisticasGanador, estadisticasRondas);
    break;
  case 0:
    cout << "Gracias por utilizar mi juego!"<< endl;
    cout << "Los ganadores no usan drogas!!" << endl;
    break;
  }
}
