#include <iostream>
using namespace std;
/***

dado un lista de 10 numeros informar cuantos de ellos son mayores al promedio

   DE:
      10 numeros;
   DS: 
      Cantidad
   
   /// Que deberiamos utilizar?
   contador para contar los mayores al promedio


   //// ESTRATEGIA
   Pedir los 10 numeros
   Sumar los 10 numeros
   calculo el promedio
   contar los mayores al promedio
   Mostrar la catiadad
*/

int main() {
   float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
   float sumaTotal, promedio;
   int cantidad = 0;
   
   cout << "Ingrese numero: ";
   cin >> n1;
      
   cout << "Ingrese numero: ";
   cin >> n2;
   
   cout << "Ingrese numero: ";
   cin >> n3;
   
   cout << "Ingrese numero: ";
   cin >> n4;
   
   cout << "Ingrese numero: ";
   cin >> n5;
   
   cout << "Ingrese numero: ";
   cin >> n6;
   
   cout << "Ingrese numero: ";
   cin >> n7;
      
   cout << "Ingrese numero: ";
   cin >> n8;
   
   cout << "Ingrese numero: ";
   cin >> n9;
   
   cout << "Ingrese numero: ";
   cin >> n10;
   
   sumaTotal = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
   promedio = sumaTotal / 10;
   
   if(n1>promedio){
      cantidad++;
   }
   
   if(n2>promedio){
      cantidad++;
   }
   
   if(n3>promedio){
      cantidad++;
   }
   
   if(n4>promedio){
      cantidad++;
   }
   
   if(n5>promedio){
      cantidad++;
   }
   
   if(n6>promedio){
      cantidad++;
   }
   
   if(n7>promedio){
      cantidad++;
   }
   
   if(n8>promedio){
      cantidad++;
   }

   if(n9>promedio){
      cantidad++;
   }
   
   if(n10>promedio){
      cantidad++;
   }
	
   
   cout << "La cantidad de nuemros mayores al promedio es: " << cantidad;
   
	return 0;
}

