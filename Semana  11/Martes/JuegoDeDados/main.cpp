#include <iostream>
using namespace std;
#include <ctime>

#include "juego.h"

int main()
{
   srand(time(0));
   string nombreJugador;

   cout << "Antes de empezar a jugar, indicame tu nombre: ";
   cin >> nombreJugador;

   jugar(nombreJugador);

   /// TODO: Cambiar lo que consideres necesario para poder mostrar las estadísticas finales
   /// en la función mostrarEstadisticas.
   /// mostrarEstadisticas(); // Recibir todos los parámetros que consideres necesarios


   return 0;
}
