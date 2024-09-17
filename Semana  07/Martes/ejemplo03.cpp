/*
  Segundo ejercicio de los técnicos reparadores del PDF.
*/

#include <iostream>
using namespace std;

int main(){
   int legajo, legajoAnterior, nserie, tiempo, cantInsumos;

   /// A
   int tiempoTotalTecnico = 0;
   /// B
   int cantReparacionesSinInsumos = 0;
   /// C
   int cantReparacionesMasDeDosHoras = 0;

   cout << "Legajo: ";
   cin >> legajo;

   while (legajo != 0){

         legajoAnterior = legajo;
         tiempoTotalTecnico = 0;
         cantReparacionesSinInsumos = 0;

         while (legajo == legajoAnterior){
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

            cout << "Legajo: ";
            cin >> legajo;
         }
         cout << endl << "PUNTO A)" << endl;
         cout << "Legajo: " << legajoAnterior << endl;
         cout << "Tiempo total: " << tiempoTotalTecnico << endl;

         cout << endl << "PUNTO B)" << endl;
         cout << "Legajo: " << legajoAnterior << endl;
         cout << "Cantidad reparaciones sin insumos: " << cantReparacionesSinInsumos << endl;
         cout << "------------------------------------------------------------" << endl;
   }
   cout << "PUNTO C" << endl;
   cout << "Cantidad de reparaciones de más de 2 horas: " << cantReparacionesMasDeDosHoras << endl;

	return 0;
}
