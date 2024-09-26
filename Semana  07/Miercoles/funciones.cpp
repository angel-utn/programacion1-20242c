#include <iostream>
using namespace std;

/***
   funcions / procedimientos
   Son una serie de instrucciones que estan bajo 
   un identificador( nombre de la funcion), 
   puede recibir argumentos (parametros)
   Puede devolver un valor (retorno)

   las funciones pueden ser llamadar o invocadas
   desde cualquier parte del programa
*/

/***
TIPO_DATO_DE_RETORNO NOMBRE_FUNCION(PARAMETRO1, PARAMETROS2...){
      INSTRUCCIONES DE LA FUNCION
}
*/

void saludar(){
   cout << "Hola soy una funcion"<<endl;
}

void saludame(string nombre){
   
   cout << "Hola " << nombre << ", como estas?" << endl;
}

int sumar(int primerNumero, int segundoNumero){
   int resultado;
   
   resultado = primerNumero + segundoNumero;
   
   return resultado;
}   


int main() {
	int numero;
   string nom;
   
   cout << "2 + 5 = " << sumar(2,5) + 10 << endl;
   
   
   saludar(); /// llama o invoca a la funcion con el nombre de  saludar
   saludame("Brian");
   saludame("Luis");
   saludame("Javier");
   
   cin >> nom;
   saludame(nom);
   
   
	return 0;
}


