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

int main() {
   int base, exponente, resultado;
   
   /// Pedir base y exponente
   cout << "Ingrese base: ";
   cin >>base;
   cout << "Ingrese exponente: ";
   cin >> exponente;
   
   /// inciializar resltado 1
   resultado = 1;
   
   /// realizar la multiplicacion exponentes veces
   for(int i=1; i<=exponente; i++){
      /// resultado = resultado * base;   
      resultado *= base; /// resultado = resultado * base
   }
   
   /// Mostra resultado
   cout << base << " ^ " << exponente << " = " << resultado;
   
   return 0;
}

