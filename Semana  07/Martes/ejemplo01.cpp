/**
   Código de la página 3 del apunte de Ciclos combinados
*/
#include <iostream>
using namespace std;

int main(){
   int n, m, resultado;

   for(n=1; n<=10; n++){

      cout << "Tabla de multiplicar del #" << n << endl;
      cout << "-------------------------------------------" << endl;

      for(m=1; m<=12; m++){
         resultado= n * m;
         cout << n << " x " << m << " = " << resultado << endl;
      }
      cout << "-------------------------------------------" << endl;
   }

	return 0;
}
