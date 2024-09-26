#include <iostream>
using namespace std;

/***
hacer un prgrama donde se ingrese la base y el exponentes positivos, 
muestre el resultado

DE:
base, 
exponente
DS: 
resultado


/// expornen 3, base 2 => 3 * 2 => 6
OP:
resultado = resultado * base  ----> repetir exponentes veces

resutado = 1


ESTRATEGIA
Pedir base y exponente
inciializar resltado 1
realizar la multiplicacion exponentes veces
Mostra resultado
*/

int potencia(int base, int exponente){
   int resultado;
   
   resultado = 1;
   
   /// realizar la multiplicacion exponentes veces
   for(int i=1; i<=exponente; i++){
      /// resultado = resultado * base;   
      resultado *= base; /// resultado = resultado * base
   }
   
   return resultado;
}

void mostrarResultado(int base, int exponente, int resultado){
  
   cout << base << " ^ " << exponente << " = " << resultado;
}
   
void calcularMostrarPotencia(int b, int e){
   int r;
   r = potencia(b, e);
   mostrarResultado(b, e, r);
   
   //mostrarResultado(b, e, potencia(b, e));
}

int main() {
   int base, exponente, result;
   
   /// Pedir base y exponente
   cout << "Ingrese base: ";
   cin >> base;
   cout << "Ingrese exponente: ";
   cin >> exponente;
   
   calcularMostrarPotencia(base, exponente);
   
   return 0;
}

