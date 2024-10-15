#include <iostream>
#include "juego.h"
#include <Windows.h>

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
}

void saludar(string nombreJugador){
   cout << endl << endl;
   cout << "Hola " << nombreJugador << ", estás por empezar a jugar a GeneLara" << endl;
   cout << "---------------------------------------------------------------" << endl << endl;
}

void contarCaras(int dados[5], int caras[6]){
   // 4 4 5 5 1

   //   [0] --> 1
   //   [1] --> 0
   //   [2] --> 0
   //   [3] --> 2
   //   [4] --> 2
   //   [5] --> 0

   int i, nroCara;
   for(i=0; i<5; i++){
      nroCara = dados[i]; // 1 y 6
      caras[nroCara-1]++;
   }
}

int determinarJugada(int dados[5], string &nombreJugada){

   if (esPoker(dados) == true){
      nombreJugada = "Poker";
      return 60;
   }
   else if (esFull(dados) == true){
      nombreJugada = "Full";
      return 50;
   }
   else if (esDoblePar(dados) == true){
      nombreJugada = "Doble par";
      return 20;
   }
   else{
      nombreJugada = "";
      return 0;
   }
}

bool esDoblePar(int dados[5]){
   int caras[6] = {}, i;
   contarCaras(dados, caras);
   bool hayDosDadosIguales = false;
   bool hayOtrosDosDadosIguales = false;

   for(i=0; i<6; i++){
      if (caras[i] == 2){
         if (hayDosDadosIguales == false){
            hayDosDadosIguales = true;
         }
         else{
            hayOtrosDosDadosIguales = true;
         }
      }
   }

   if (hayDosDadosIguales == true && hayOtrosDosDadosIguales == true){
      return true;
   }
   else{
      return false;
   }
   // return hayTresDadosIguales && hayDosDadosIguales;
}

bool esFull(int dados[5]){
   int caras[6] = {}, i;
   contarCaras(dados, caras);
   bool hayTresDadosIguales = false;
   bool hayDosDadosIguales = false;

   for(i=0; i<6; i++){
      if (caras[i] == 3){
         hayTresDadosIguales = true;
      }
      else if (caras[i] == 2){
         hayDosDadosIguales = true;
      }
   }

   if (hayTresDadosIguales == true && hayDosDadosIguales == true){
      return true;
   }
   else{
      return false;
   }

   // return hayTresDadosIguales && hayDosDadosIguales;

}

bool esPoker(int dados[5]){
   int caras[6] = {}, i;
   contarCaras(dados, caras);

   for(i=0; i<6; i++){
      if (caras[i] == 4){
         return true;
      }
   }
   return false;
}

bool esGenerala(int dados[5]){
   int caras[6] = {}, i;
   contarCaras(dados, caras);

   for(i=0; i<6; i++){
      if (caras[i] == 5){
         return true;
      }
   }
   return false;
}

void jugar(string nombreJugador)
{
   saludar(nombreJugador);
   bool continuarJuego = true;

   string nombreJugada;

   int dados[5], nroLanzamiento = 1, puntosJugada, puntajeAcumulado = 0;

   while (continuarJuego == true){
      cout << "#" << nroLanzamiento << "   ";
      tiradaDeDados(dados, 5);
      mostrarDados(dados, 5);

      if (esGenerala(dados) == true){
         continuarJuego = false;
      }
      else{
         puntosJugada = determinarJugada(dados, nombreJugada);

         if (puntosJugada > 0){
            puntajeAcumulado += puntosJugada;
            cout << "   |   " <<  puntosJugada << "  " << nombreJugada << "  |  " << puntajeAcumulado;
         }
         cout << endl;
      }
      nroLanzamiento++;
   }

   cout << endl << "Fin del juego! :-(" << endl;




}



