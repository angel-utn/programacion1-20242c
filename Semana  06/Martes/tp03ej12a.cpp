#include <iostream>
using namespace std;

	/**
Ejemplo: 5, 8, 12, 2, -10, 0, -20, 8, -3, 24.
*/

int main() {
	
	int num, maxNegativo, minPositivo;
	int cuentaNegativo = 0;	/// CONTADOR NEGATIVO
	int cuentaPositivos = 0; /// CONTADOR POSITIVO
	
	for(int i = 1; i <= 10; i++){
		cout << "Ingrese #: ";
		cin >> num;
		
		if(num < 0){
			cuentaNegativo++;	// CUENTO NEGATIVO
			if(cuentaNegativo == 1){
				maxNegativo = num;
			}
			else if( num > maxNegativo){
				maxNegativo = num;					
			}
		}
		else if (num > 0){
			cuentaPositivos++;
			if(cuentaPositivos == 1){
				minPositivo = num;
			}
			else if(num < minPositivo){
				minPositivo = num;
			}
		}
	}
	
	cout << "Maximo negativo: " << maxNegativo << endl;
	cout << "Minimo positivo: " << minPositivo << endl;
	
	return 0;
}

