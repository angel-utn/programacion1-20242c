#include <iostream>
using namespace std;

int main(){

  int cantUnidades;
  float precioUnitario, importeTotal;
  string nombreProducto;

  cout << "Nombre del producto: ";
  cin >> nombreProducto;

  cout << "Precio unitario: $";
  cin >> precioUnitario;

  cout << "Cantidad de unidades: ";
  cin >> cantUnidades;

  importeTotal = precioUnitario * cantUnidades;

   cout << endl << endl;
   cout << "KIOSCO UTN" << endl;
   cout << "-------------------------" << endl;
   cout << "PRODUCTO        : " << nombreProducto << endl;
   cout << "PRECIO UNITARIO : $ " << precioUnitario << endl;
   cout << "UNIDADES        : " << cantUnidades << endl;
   cout << "-------------------------" << endl;
   cout << "TOTAL A PAGAR   : $ " << importeTotal << endl;




  return 0;
}
