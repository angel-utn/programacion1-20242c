#include <iostream>
using namespace std;

/***
  Entendimiento del Problema
  ---------------------------
  Hacer un programa que dado un numero entero,
  Me muestre la tabla de multiplicacion de dicho.

  Anlisis
  -------
  DE:
    numero
  DS:
    retrusldo del  numero * 1
    retrusldo del  numero * 2
    retrusldo del  numero * 3
    ...
    retrusldo del  numero * 10
  Oper
    numero * 1
    ...
    numero * 10

  Estrategia
  Pedir el numero
  mostrar la tabla del 1 al 10


  Podriamos decir que la idea es repetir numero * N,
  e ir cambiando a N del 1 hasta 10

  Estructura de repiticion

  Exacta FOR: Cuando nosotros, los programadores, sabemos la cantidad de repeticion
    - cuando conocemos la cantidad en el momento de programacion
    - cuando podemos calcular la cantidad de repecion

  Inexacta WHILE: Cunado no sabemos la cantidad de repiciones,
    pero hay una condicion que me permite finalizar las peticiones



*/

int main()
{
  int numero, i;

  cout << "Ingrese numero: ";
  cin >> numero;

  for(i=1; i<=10 ; i++)
  {
    cout << numero << " x " << i << " = " << numero * i  << endl;
  }


  return 0;
}
