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

   if (notaExamen >= 6){
      cout << "Examen aprobado" << endl;
   }
   else{
      cout << "Examen desaprobado" << endl;
   }


	return 0;
}
