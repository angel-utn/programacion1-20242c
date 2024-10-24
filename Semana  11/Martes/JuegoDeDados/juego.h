#pragma once

#include <string>
using namespace std;

bool esDoblePar(int dados[5]);
bool esFull(int dados[5]);
bool esGenerala(int dados[5]);
bool esPoker(int dados[5]);
void contarCaras(int dados[5], int caras[6]);
int determinarJugada(int dados[5], string &nombreJugada);


void jugar(string nombreJugador);
void saludar(string nombreJugador);
int tirarDado();
void tiradaDeDados(int vDados[], int cantidad);
void mostrarDados(int vDados[], int cantidad);
