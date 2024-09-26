#include <iostream>
using namespace std;

int main() {
   string vNombres[5]{"Juan", "Jose", "Lautaro", "Javier", "Rodolfo"};
   int indice;
   
   cout << "Ingrese numero del nombre: ";
   cin >> indice;
   
   cout << "Hola, " << vNombres[indice] << endl;
	
	return 0;
}

