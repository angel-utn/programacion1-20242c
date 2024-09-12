#include <iostream>
using namespace std;

/***
   dada una lista de 10 numeros, 
   mostrar la cantidad de numeros enteros
*/

int main() {
   float num;
   int cont = 0;
   
   for(int i=1; i<=10; i++){
      cout << "Ingrese numero: ";
      cin >> num;
      
      /// cualquier numero es divisible por 1
      /// por lo tanto, todos al ser dividido por 1 el resto es cero
      
      /// el resto es sobre numero enteros
      /*
      if(num%1 == 0){
         cont ++;
      }
      */
      
      if(num == (int)num){
         cont ++;
      }
   }
   
   cout << "La cantidad: " << cont << endl;
   
	
	return 0;
}

