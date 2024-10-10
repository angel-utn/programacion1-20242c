#include <iostream>
#include "juego.h"

using namespace std;

int tirarDado()
{
  return rand() % 6 + 1;
}

void tiradaDeDados(int vDados[], int cantidad)
{
  for(int i=0; i<cantidad; i++)
  {
    vDados[i] = tirarDado();
  }
}

void mostrarDados(int vDados[], int cantidad)
{
  for(int i=0; i<cantidad; i++)
  {
    cout << " " << vDados[i];
  }

  cout << endl;
}

int calcularPuntaje(int vDados[], int cantidad)
{

  int puntos = 0;
  for(int i=0; i<cantidad; i++)
  {
    if(vDados[i] > puntos)
    {
      puntos = vDados[i];
    }
  }

  /// TODO: Si todos los valores son iguales, los puntos obtenidos son cero
  
  return puntos;
}

int ejecutarRonda()
{
  int dados[5], puntajeRonda;

  tiradaDeDados(dados, 5);
  mostrarDados(dados, 5);
  puntajeRonda = calcularPuntaje(dados, 5);
  cout << "Puntos de la ronda: " <<  puntajeRonda << endl;

  return puntajeRonda;
}

void jugar(int &estadisticasGanador, int &estadisticasRondas)
{
  int dados[5], puntajeRonda1, puntajeRonda2, puntajeTotal1=0, puntajeTotal2=0;
  int cantidadRondas=0;
  do
  {
    cantidadRondas++;
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "Ronda #" << cantidadRondas << endl;
    puntajeTotal1 += ejecutarRonda();
    puntajeTotal2 += ejecutarRonda();

    cout << "Puntaje total jugador #1: " << puntajeTotal1 << endl;
    cout << "Puntaje total jugador #2: " << puntajeTotal2 << endl;

  }
  while(puntajeTotal1 < 25 && puntajeTotal2 < 25);

  if(puntajeTotal1 >= puntajeTotal2)
  {
    cout << "El gandor fue el jugador #1" << endl;
    estadisticasGanador = 1;
  }

  if(puntajeTotal2 >= puntajeTotal1)
  {
    cout << "El gandor fue el jugador #2" << endl;
    estadisticasGanador = 2;
  }

  estadisticasRondas = cantidadRondas;
  
  cout << "En la ronda #" << cantidadRondas << endl;
  
  // TODO: Hacer que solo guarde si es menor al de estadisticasRondas
  
  cout << endl;
}



