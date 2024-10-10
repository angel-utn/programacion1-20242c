#include <iostream>
#include <ctime>
#include "menu.h"

using namespace std;

int main()
{
  int opcion;
  int estadisticasGanador=0, estadisticasRondas=0;
  srand(time(0));

  do
  {
    system("cls");

    opcion = seleccionarOpcion();
    ejecutarOpcion(opcion, estadisticasGanador, estadisticasRondas);
    
    cout << "Presione cualquier tecla para continuar ...";
    system("pause>nul");
  }
  while(opcion != 0);

  return 0;
}

