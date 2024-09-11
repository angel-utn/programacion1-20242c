#include <iostream>
using namespace std;

/**
Desarrollar un programa en C++ que permita registrar las notas de varios
exámenes de una facultad hasta que se ingresa una nota fuera de rango
( las notas validas son de 1 a 10 inclusives).

Se pide calcular y mostrar el promedio de las notas ingresadas.

	DE: notas de examenes.

	OP: calcular el promedio. Acumular notas y contar la cantidad de notas.

	DS: promedio de notas.

*/


int main() {
	
	int nota;
	int sumarNotas = 0; /// ACUMULADOR
	int cantidadNotas = 0; /// CONTADOR
	float promedio;
	
	cout << "Ingrese nota: ";
	cin >> nota;
	
	while( (nota >= 1) && (nota <= 10) ){
		
		sumarNotas += nota;
		///sumarNotas = sumarNotas + nota;
		//sumarNotas++; /// ERROR PORQUE TIENE QUE ACUMULAR, NO CONTAR
		cantidadNotas++;
		
		cout << "Ingrese nota: ";
		cin >> nota;
	}
	
	if(cantidadNotas > 0){
	/// CALCULO EL PROMEDIO
	promedio = sumarNotas / (float)cantidadNotas;
	// INT / INT = INT
		cout << "El promedio es: " << promedio << endl;
	}
	else{
		cout << "No se ingresaron notas" << endl;
	}

	
	
	
	return 0;
}

