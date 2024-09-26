#include <iostream>

using namespace std;

/// dracula theme for code::blocks


/**
Hacer un programa que determine si un número ingresado es primo o no.
*/


bool esPrimo(int n);
void muestrarPrimosEntreRango(int inicio, int fin);


int main()
{
    int inicio, fin;
    cout << "Ingrese inicio: ";
    cin >> inicio;

    cout << "Ingrese fin: ";
    cin >> fin;

    muestrarPrimosEntreRango(inicio,fin);



    return 0;
}

bool esPrimo(int n)
{
    /// CUENTA DIVISORES
    int cuentaDivisores = 0;

    /// RECORRER LOS POTENCIALES DIVISORES Y CONTARLOS
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            cuentaDivisores++;
        }
    }
    /// VERIFICAR SI SON SOLO 2 LOS DIVISORES
    if(cuentaDivisores==2)
    {
        return true;
    }
    return false;

}

void muestrarPrimosEntreRango(int inicio, int fin)
{
    for(int i = inicio; i <= fin; i++)
    {
        /// i -> REPRESENTA EL NUMERO A EVALUAR
        if(esPrimo(i)==true)
        {
            cout << i << endl;
        }

    }
}
