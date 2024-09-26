#include <iostream>

using namespace std;

void porValor(int num);
void porReferencia(int &num);

int main(){

    int n = 0;

    cout << "Antes de la funcion: " << n << endl;

    ///porValor(n);
    porReferencia(n);

    cout << "Despues de la funcion: " << n << endl;

    return 0;
}

void porValor(int num){
    num = 20;
    cout << "El numero es: " << num << endl;
}

void porReferencia(int &num){
    cout << "El numero es: " << num << endl;
    num = - 30;
}





