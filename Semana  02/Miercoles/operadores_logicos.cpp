#include <iostream>
using namespace std;
/**

   Los AND los va a hacer primero que los OR

   AND => *
   OR => +

*/

int main() {
   
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero >= 20 && numero <= 30){
      cout << "Esta dentro del rango" << endl;
   }
   else{
      cout << "No esta dentro del rango" << endl;
   }
	
	return 0;
}

