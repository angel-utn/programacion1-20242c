#include <iostream>

using namespace std;

/**
Un comercio vende gaseosas en packs de 6 unidades y también por unidades sueltas.

Crear un programa que permita ingresar la cantidad de botellas de gaseosas requeridas por un cliente y determine cuántas unidades sueltas y cuántos packs debe entregarle al cliente.
*/

int main(){

    /// DECLARACION VARIABLES
    int cantidadBotellas, packs, unidades;
    const int UNIDADESXPACK = 6;

    /// INGRESO DATOS
    cout << "Ingrese cantidad: ";
    cin >> cantidadBotellas;

    /// CALCULOS/PROCESOS
    unidades = cantidadBotellas % UNIDADESXPACK;
    packs = cantidadBotellas / UNIDADESXPACK;

    //packs = (cantidadBotellas-unidades) / UNIDADESXPACK;

    /// SALIDA
    cout << "Unidades sueltas: " << unidades << endl;
    cout << "Cantidad packs: " << packs << endl;
    
    return 0;
}
