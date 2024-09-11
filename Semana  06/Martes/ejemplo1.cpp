#include <iostream>
using namespace std;
/**
Desarrollar un programa en C++ que simule la gestión de compras.

El programa debe iniciar con un saldo disponible de $ 20000 en una cuenta.

Por cada compra realizada por el usuario se debe ingresar el monto de esta,

la cual reduce el saldo inicial.

El proceso debe continuar hasta que no haya saldo suficiente para realizar
una nueva compra.

Se pide calcular y mostrar el total de compras realizadas.

	DE: montoCompra   
	DO: saldo = 20000
	DS: total de compras realizadas

	¿cuantas compras?
	Cantidad desconocida, hasta el SALDO_INICIAL sea insuficiente (cuando
	llegue a CERO).

*/

int main(int argc, char *argv[]) {
	
	float saldo = 20000;
	float monto;
	
	int cantidadCompras = 0;
	
	while(saldo > 0){
		cout << "Ingrese importe $: ";
		cin >> monto;
		
		///saldo = saldo - monto;
		saldo -= monto;
		
		cantidadCompras++;
	}
	
	cout << "Cantidad de compras realizadas: " << cantidadCompras << endl;
	
	return 0;
}

