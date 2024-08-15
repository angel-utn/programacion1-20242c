#include <iostream>
using namespace std;

int main(){

  int cantUnidades;
  float precioUnitario, importeTotal, pagoDelCliente, vuelto;
  string nombreProducto;

  cout << "Nombre del producto: ";
  cin >> nombreProducto;

  cout << "Precio unitario: $";
  cin >> precioUnitario;

  cout << "Cantidad de unidades: ";
  cin >> cantUnidades;

  importeTotal = precioUnitario * cantUnidades;
  cout << endl;
  cout << "Total a pagar: $ " << importeTotal;
  cout << endl;

  cout << "Pago del cliente: $";
  cin >> pagoDelCliente;

  vuelto = pagoDelCliente - importeTotal;

  /// Falta resolver el cálculo del descuento cuando corresponde. Ver PDF.

   cout << endl << endl;
   cout << "KIOSCO UTN" << endl;
   cout << "-------------------------" << endl;
   cout << "PRODUCTO        : " << nombreProducto << endl;
   cout << "PRECIO UNITARIO : $ " << precioUnitario << endl;
   cout << "UNIDADES        : " << cantUnidades << endl;
   cout << "-------------------------" << endl;
   cout << "TOTAL A PAGAR   : $ " << importeTotal << endl;

   if (vuelto > 0){
      cout << "VUELTO          : $ " << vuelto << endl;
   }
   else{
      cout << "NO CORRESPONDE DAR VUELTO" << endl;
   }



  return 0;
}
