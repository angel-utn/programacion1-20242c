#include <iostream>
using namespace std;

/**
	10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 
*/

int main() {
	
	int num;
	/// PTO A
	int contadorPositivos = 0;
	int cuentaTernas = 0;
	
	/// PTO B
	int contadorNegativos = 0;
	int cuentaTernasNegativos = 0;
	int ant;
	
	for(int i = 1; i <= 13; i++){
		cout << "Ingrese #: ";
		cin >> num;
		
		if(num > 0){
			contadorNegativos = 0;
			contadorPositivos++;
			if(contadorPositivos >= 3){
				cuentaTernas++;
				///contadorPositivos--;
			}
		}
		else{
			contadorPositivos = 0;
		}
		
		if(num < 0){
			contadorNegativos++;
			contadorPositivos = 0;
			/// COMPARAR 
			if(contadorNegativos > 1){
				if(num<= ant){
					contadorNegativos = 1;
				}
			}
			if(contadorNegativos >= 3){
				cuentaTernasNegativos++;
			}
			
			ant = num;
		}
		if(num==0){
			contadorNegativos = 0;
			contadorPositivos = 0;
		}
		
	}
	cout << "La cantidad de ternas de valores positivos consecutivos: ";
	cout  << cuentaTernas << endl;
	cout <<  "La cantidad de ternas de valores negativos consecutivos y";
	cout << " ordenados en forma creciente: " << cuentaTernasNegativos;
	return 0;
}

