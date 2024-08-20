/**
   Examen aprobado: Nota >= 6
   Examen desaprobado
*/

#include <iostream>
using namespace std;

int main(){
   int notaExamen;
   cout << "Ingresa la nota del examen final: ";
   cin >> notaExamen;

   /**
      10 >= 6 ----> true
      !true -----> false

      3 >= 6 ----> false
      !false ----> true
   */
   if (!(notaExamen >= 6)){
      cout << "Examen desaprobado" << endl;
   }
   else{
      cout << "Examen aprobado" << endl;
   }


	return 0;
}
