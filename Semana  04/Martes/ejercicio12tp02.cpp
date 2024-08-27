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
   int a, b, c;

   cout << "Ingresar tres numeros enteros distintos entre si: " << endl;
   cin >> a;
   cin >> b;
   cin >> c;

   /// El del medio es A
   if ((a > b && a < c) || (a < b && a > c)){
      cout << "El nro del medio es: " << a << endl;
   }
   else{
      /// El del medio es B
      if ((b > a && b < c) || (b < a && b > c)){
         cout << "El nro del medio es: " << b << endl;
      }
      else{
         cout << "El nro del medio es: " << c << endl;
      }
   }

	return 0;
}
