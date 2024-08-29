/**
Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises.
Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

- Cantidad de carteras
- Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
- Cantidad total de carteras vendidas en total. (int y una sola vez al final)
- Cuántas carteras quedaron de cada tipo. (4 int y se muestran al final)
- Los colores de carteras que no se vendieron. (3 strings o enteros como máximo)

NOTA: Ninguna venta superará las 10 carteras.
*/

#include <iostream>
using namespace std;

int main()
{
  int cantidadCarteras, tipoCartera;
  const int STOCK_INICIAL_BLANCAS = 45, STOCK_INICIAL_NEGRAS = 50, STOCK_INICIAL_MARRONES = 40, STOCK_INICIAL_GRISES = 49;

  /// A
  int totalCarterasVendidas = 0;
  /// B
  int stockBlancas = STOCK_INICIAL_BLANCAS, stockNegras = STOCK_INICIAL_NEGRAS, stockMarrones = STOCK_INICIAL_MARRONES, stockGrises = STOCK_INICIAL_GRISES;
  /// C
  bool seVendieronBlancas = false, seVendieronNegras = false, seVendieronMarrones = false, seVendieronGrises = false;
  int cantCarterasBlancasVendidas = 0, cantCarterasNegrasVendidas = 0, cantCarterasMarronesVendidas = 0, cantCarterasGrisesVendidas = 0;

  for(int i=1; i<=5; i++)
  {
    cout << "VENTA " << i << endl << "-------------------" << endl;
    cout << "Cantidad de carteras: ";
    cin >> cantidadCarteras;
    cout << "Tipo de cartera (1-Blanco; 2-Negro; 3-Marron; 4-Gris): ";
    cin >> tipoCartera;
    totalCarterasVendidas += cantidadCarteras;

    switch(tipoCartera)
    {
    case 1: // Blanco
      stockBlancas -= cantidadCarteras;
      seVendieronBlancas = true;
      cantCarterasBlancasVendidas++;
      break;
    case 2: // Negro
      stockNegras -= cantidadCarteras;
      seVendieronNegras = true;
      cantCarterasNegrasVendidas++;
      break;
    case 3: // Marron
      stockMarrones -= cantidadCarteras;
      seVendieronMarrones = true;
      cantCarterasMarronesVendidas++;
      break;
    case 4: // Gris
      stockGrises -= cantidadCarteras;
      seVendieronGrises = true;
      cantCarterasGrisesVendidas++;
      break;
    }

  }
  cout << endl << "ESTADISTICAS" << endl << "---------------------------" << endl;
  cout << "A) Total de carteras vendidas: " << totalCarterasVendidas << endl;
  cout << "B) Stock remanente de cada cartera" << endl;
  cout << "\tBlancas  : " << stockBlancas << endl;
  cout << "\tNegras   : " << stockNegras << endl;
  cout << "\tMarrones : " << stockMarrones << endl;
  cout << "\tGrises   : " << stockGrises << endl;
  cout << "C) Colores de carteras que no se vendieron (con banderas): " << endl;

  if (seVendieronBlancas == false)
  {
    cout << "\tBlancas" << endl;
  }
  if (seVendieronNegras == false)
  {
    cout << "\tNegras" << endl;
  }
  if (seVendieronMarrones == false)
  {
    cout << "\tMarrones" << endl;
  }
  if (seVendieronGrises == false)
  {
    cout << "\tGrises" << endl;
  }

  cout << endl << "C) Colores de carteras que no se vendieron (con contadores): " << endl;

  if (cantCarterasBlancasVendidas == 0)
  {
    cout << "\tBlancas" << endl;
  }
  if (cantCarterasNegrasVendidas == 0)
  {
    cout << "\tNegras" << endl;
  }
  if (cantCarterasMarronesVendidas == 0)
  {
    cout << "\tMarrones" << endl;
  }
  if (cantCarterasGrisesVendidas == 0)
  {
    cout << "\tGrises" << endl;
  }

  cout << endl << "C) Colores de carteras que no se vendieron (utilizando comparación de stocks): " << endl;

  if (stockBlancas == STOCK_INICIAL_BLANCAS)
  {
    cout << "\tBlancas" << endl;
  }
  if (stockNegras == STOCK_INICIAL_NEGRAS)
  {
    cout << "\tNegras" << endl;
  }
  if (stockMarrones == STOCK_INICIAL_MARRONES)
  {
    cout << "\tMarrones" << endl;
  }
  if (stockGrises == STOCK_INICIAL_GRISES)
  {
    cout << "\tGrises" << endl;
  }




  return 0;
}
