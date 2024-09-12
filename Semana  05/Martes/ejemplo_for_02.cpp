/**
   Ejercicio 20 - TP 02

   Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:

   - La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
   - El promedio de altura de las personas mayores a 30 años.
   - La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
   - La cantidad de personas cuya edad sea de 20, 30 o 40 años.

   DE:
   ---
   Edad (int) y altura (float) de 5 personas

   PROCESO:
   -------
   - Declaro variables
   - Inicializo variables que requieran inicializarse
   - Hago un ciclo exacto de 5 vueltas. Ingreso edad y altura.
      - Comparo, cuento, proceso, etc. Las variables para cada uno de los puntos.
   - Al finalizar el ciclo muestro las variables de los informes.

   DS:
   ---
   A) int cantPersonasMas30Mas180 --> Lo muestro al final de todo
   B) float promedioAlturaMayores30 --> Lo muestro al final de todo si hay promedio que mostrar.
   C) int cantPersonasEntre170y180 --> Lo muestro al final de todo
   D) int cantPersonasEdad203040 --> Lo muestro al final de todo
*/
#include <iostream>
using namespace std;

int main(){
   int edad, persona;
   float altura;

   /// A
   int cantPersonasMas30Mas180 = 0;

   /// B
   int cantPersonasMas30 = 0;
   float sumaAlturasPersonasMas30 = 0, promedioAltura;

   /// C
   int cantPersonasEntre170y180 = 0;

   /// D
   int cantPersonasEdad203040 = 0;


   for(persona=1; persona<=5; persona++){
      cout << "Ingresar los datos de la persona #" << persona << endl;
      cout << "--------------------------------------" << endl;
      cout << "Edad: ";
      cin >> edad;
      cout << "Altura: ";
      cin >> altura;

      /// A
      if (edad > 30 && altura > 1.8f){
         cantPersonasMas30Mas180++;
      }

      /// B
      if (edad > 30){
         cantPersonasMas30++;
         sumaAlturasPersonasMas30 += altura;
      }

      /*
      /// A y B
      if (edad > 30){
         cantPersonasMas30++;
         sumaAlturasPersonasMas30 += altura;
         /// B
         if (altura > 1.8f){
            cantPersonasMas30Mas180++;
         }
      }
      */

      /// C
      if ( (altura >= 1.7f) && (altura <= 1.8f)){
         cantPersonasEntre170y180++;
      }

      /// D
      if ((edad == 20) || (edad == 30) || (edad == 40)){
         cantPersonasEdad203040++;
      }

   }


   cout << endl << endl << "ESTADÍSTICAS" << endl << "--------------------" << endl;
   cout << "A) Personas de más de 30años y más de 1.8mts: " << cantPersonasMas30Mas180 << endl;
   /// B
   if (cantPersonasMas30 > 0){
      promedioAltura = sumaAlturasPersonasMas30 / cantPersonasMas30;
      cout << "B) Promedio de altura de personas con más de 30 años: " << promedioAltura << endl;
   }
   else{
      cout << "B) No hay personas con más de 30 años para calcular el promedio" << endl;
   }
   cout << "C) Cantidad de personas con altura entre 1.7 y 1.8: " << cantPersonasEntre170y180 << endl;
   cout << "D) Cantidad de personas con edad 20, 30 o 40 años: " << cantPersonasEdad203040 << endl;

	return 0;
}
