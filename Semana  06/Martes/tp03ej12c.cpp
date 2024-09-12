#include <iostream>
using namespace std;

/**
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
*/

int main() {
	
	int num;
	int maxNegativo = -999999;
	int minPositivo = 999999;
	
	for(int i = 1; i <= 10; i++){
		cout << "Ingrese #: ";
		cin >> num;
		
		if(num < 0){
			if( num > maxNegativo ){
				maxNegativo = num;					
			}
		}
		else if (num > 0){
			if(num < minPositivo){
				minPositivo = num;
			}
		}
	}
	
	cout << "Maximo negativo: " << maxNegativo << endl;
	cout << "Minimo positivo: " << minPositivo << endl;
	
	return 0;
}
