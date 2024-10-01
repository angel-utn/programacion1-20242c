#include <iostream>
using namespace std;
#include <string>

/// Hacer una función que se llame saludar y que reciba el nombre de la persona a saludar y
/// muestre un mensaje "Hola <nombre">

/// Declaración de función
void saludar(string nombrePersona);

int main(){
   /// Llamado a función
   string nombrePersonaASaludar;
   cout << "Ingresa el nombre de la persona a saludar: ";
   cin >> nombrePersonaASaludar;

   saludar("Andrea");
   saludar(nombrePersonaASaludar);

	return 0;
}

/// Definición de función
void saludar(string nombrePersona){
   cout << "Hola " << nombrePersona << endl;
}
