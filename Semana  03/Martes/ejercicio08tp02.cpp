/**
8
Hacer un programa para ingresar por teclado la longitud de los tres lados de un tri�ngulo
y luego listar qu� tipo de tri�ngulo es:
- Equil�tero: si los tres lados son iguales.
- Is�sceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre s�.
*/
#include <iostream>
using namespace std;

int main(){
   float lado1, lado2, lado3;
   string nombreTriangulo = "";

   cout << "Ingresar las longitudes de los tres lados de un triangulo: " << endl;
   cin >> lado1;
   cin >> lado2;
   cin >> lado3;

   if (lado1 == lado2 && lado2 == lado3){
      nombreTriangulo = "Equilatero";
   }
   else{
      if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
         nombreTriangulo = "Escaleno";
      }
      else{
         nombreTriangulo = "Isosceles";
         // ABB, BAB, BBA
   //      if (
   //            (lado1 != lado2 && lado2 == lado3 && lado1 != lado3) ||
   //            (lado1 != lado2 && lado2 != lado3 && lado1 == lado3) ||
   //            (lado1 == lado2 && lado2 != lado3 && lado1 != lado3)
   //          ){
   //         nombreTriangulo = "Isosceles";
   //      }
      }
   }

   cout << "El triangulo es: " << nombreTriangulo;

	return 0;
}
