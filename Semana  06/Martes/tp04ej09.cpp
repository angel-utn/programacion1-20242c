#include <iostream>
using namespace std;
/**

EJ9.
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo de los pares.

Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.

Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.

Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará
Máximo -8.

*/

int main() {
	
	int cuentaPares = 0, maximoPar, cuentaPosiciones = 0;
	int num, posicionMaximo;
	
	cout << "Ingrese #: ";
	cin >> num;
	
	while ( num != 0 ){
		cuentaPosiciones++;
		
		if(num%2 == 0){
			cuentaPares++;
			if(cuentaPares == 1){
				maximoPar = num;
				posicionMaximo = cuentaPosiciones;
			}
			else if( num > maximoPar){
				maximoPar = num;
				posicionMaximo = cuentaPosiciones;
			}
		}
		
		cout << "Ingrese #: ";
		cin >> num;
	}
	
	cout << "Maximo par: " << maximoPar << " en la ubicacion: " << posicionMaximo;
	
	return 0;
}

