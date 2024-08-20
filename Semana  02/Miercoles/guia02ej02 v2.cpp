#include <iostream>
using namespace std;

int main() {
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero > 0){
      cout << "Es positivo" << endl;
   }
   else if(numero < 0){
      cout << "Es negativo" << endl;
   }
   else{
      cout << "Es cero" << endl;
   }
      
   return 0;
}

