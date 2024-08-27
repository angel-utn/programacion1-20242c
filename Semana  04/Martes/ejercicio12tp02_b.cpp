/**
EJ 12 TP 02

Hacer un programa para ingresar tres números diferentes y determinar e
informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8
N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8
N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8
N1=10, N2=6, N3=8. Valor del medio: 8
*/
#include <iostream>
using namespace std;

int main(){
   int a, b, c, maximo, minimo, medio;

   cout << "Ingresar tres numeros enteros distintos entre si: " << endl;
   cin >> a;
   cin >> b;
   cin >> c;

   /// Nos quedamos con el máximo
   if (a > b && a > c){
      maximo = a;
   }
   else{
      if (b > c){
         maximo = b;
      }
      else{
         maximo = c;
      }
   }

   /// Nos quedamos con el mínimo
   if (a < b && a < c){
      minimo = a;
   }
   else{
      if (b < c){
         minimo = b;
      }
      else{
         minimo = c;
      }
   }

   /// Calculamos el del medio
   if (a != maximo && a != minimo){
      medio = a;
   }
   else{
      if (b != maximo && b != minimo){
         medio = b;
      }
      else{
         medio = c;
      }
   }

   cout << "El nro del medio es: " << medio << endl;



	return 0;
}
