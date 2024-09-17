/*
  Primer ejercicio de los técnicos reparadores del PDF.
*/
#include <iostream>
using namespace std;

int main(){
   const int TEC = 5;
   const int REP = 10;
   int i, j, legajo, nserie, tiempo, cantInsumos;

   /// A
   int tiempoTotalTecnico = 0;
   /// B
   int cantReparacionesSinInsumos = 0;
   /// C
   int cantReparacionesMasDeDosHoras = 0;

   for(i=1; i<=TEC; i++){
      tiempoTotalTecnico = 0;
      cantReparacionesSinInsumos = 0;

      for(j=1; j<=REP; j++){
         cout << "Legajo: ";
         cin >> legajo;
         cout << "Número de serie: ";
         cin >> nserie;
         cout << "Tiempo: ";
         cin >> tiempo;
         cout << "Cantidad insumos: ";
         cin >> cantInsumos;

         /// A
         tiempoTotalTecnico += tiempo;
         /// B
         if (cantInsumos == 0){
            cantReparacionesSinInsumos++;
         }
         /// C
         if (tiempo > 120){
            cantReparacionesMasDeDosHoras++;
         }
      }
      cout << endl << "PUNTO A)" << endl;
      cout << "Legajo: " << legajo << endl;
      cout << "Tiempo total: " << tiempoTotalTecnico << endl;

      cout << endl << "PUNTO B)" << endl;
      cout << "Legajo: " << legajo << endl;
      cout << "Cantidad reparaciones sin insumos: " << cantReparacionesSinInsumos << endl;
      cout << "------------------------------------------------------------" << endl;
   }
   cout << "PUNTO C" << endl;
   cout << "Cantidad de reparaciones de más de 2 horas: " << cantReparacionesMasDeDosHoras << endl;

	return 0;
}
