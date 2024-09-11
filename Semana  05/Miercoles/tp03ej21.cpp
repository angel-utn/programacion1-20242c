#include <iostream>
using namespace std;

int main() {
	
	/// DECLARACION
	int acumDivisores = 0;
	int num;
	
	/// INGRESO DE DATOS
	cout << "Ingrese #: ";
	cin >> num;
	
	for(int i = 1; i < num; i++){
		if(num%i == 0){
			//acumDivisores+=i;
			acumDivisores= acumDivisores + i;
		}
	}
	if(acumDivisores==num){
		cout << "El numero " << num << " es perfecto" << endl;
	}
	else{
		cout << "El numero " << num << " no es perfecto" << endl;
	}
	
	return 0;
}

