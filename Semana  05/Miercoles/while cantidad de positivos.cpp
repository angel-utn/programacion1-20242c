#include <iostream>
using namespace std;

/***
   Hacer un programa que dado una lista de numeros
   el programa finaliza cuando se ingrese un numero cero 
      (el cero no debe ser considerado)
   Muestre la cantidad de numeros positivos

   /// este se resuelve con el while
      - No se la cantidad
      - Hay una condicion que hace que termine de repetir

   /// el numero del corte, se ignore
   
   while(expresion_logica){
      /// repite mientras la expresion_logica es true
   }
   /// deja de repetir cuando la expresion logica es false


   //// para que el ultima dato se ignore (o sea no se procese)
   
   cin
   while(expresion_logica){
      /// procesar
      cin
   }

   /// procesar el ultimo dato
   do{
      cin
      /// procesamos
   }while(expresion_logica);

   WHILE tiene cero a N repeticiones
   DOWHILE tiene 1 a N repeticiones

*/

int main() {
   int num, cant = 0;
   
   cout << "Ingrese numero:";
   cin >> num;
   
   while(num != 0){
      
      if(num > 0){
         cant++;
      }
      
      cout << "Ingrese numero:";
      cin >> num;
   }
   
   cout << "La cantidad de numetos positivos son: " << cant << endl;
   
   
	system("pause");
	return 0;
}

