#include <iostream>

using namespace std;

/// DECLARACION
///tipo_de_retorno nombre_de_la_funcion(optativo)

/*
/// Parametros: puede tener ninguno
                uno, o mas,

    tipo_dato nombre_parametro1,
    tipo_dato nombre_parametro2


    funciones: tipo de retorno
    - void: funciones que no retorna nada
    - no void: devuelven algo tienen RETURN
            string, bool, float, char
*/

/// DECLARACION
bool esPar(int x);
void saludar();

int main(){
     /*
    int a = -2;
    if(esPar(a)){
        cout << "El numero " << a << " es PAR";
    } */

    saludar();

    return 0;
}

/// DEFINICION DE FUNCIONES
bool esPar(int x){
    if(x%2 == 0){
        return true;
    }
    return false;
}

void saludar(){
    cout << "Hola" << endl;
    return;
}
