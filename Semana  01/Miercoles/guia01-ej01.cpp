
#include<iostream>
using namespace std;

int main() {
	int horas;
	int sueldo, valorhora;
	
	cout << "Cantidad de Horas:" << endl;
	cin >> horas;
	
	cout << "Valor Hora: " << endl;
	cin >> valorhora;
	
	sueldo = horas*valorhora;
	
	cout << "El sueldo es: " << sueldo << endl;
	
	return 0;
}

