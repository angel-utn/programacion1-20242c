#include <iostream>
using namespace std;

int main(){
   char formaPago;
   cout << "Ingresar forma de pago (E, T, C, Q): ";
   cin >> formaPago;

   switch (formaPago){
      case 'E':
      case 'e':
         cout << "Elegiste Efectivo";
      break;
      case 'T':
      case 't':
         cout << "Elegiste Tarjeta";
      break;
      case 'C':
      case 'c':
         cout << "Elegiste Cheque";
      break;
      case 'Q':
      case 'q':
         cout << "Elegiste QR";
      break;
      default:
         cout << "Forma de pago incorrecta o desconocida";
      break;
   }

	return 0;
}
