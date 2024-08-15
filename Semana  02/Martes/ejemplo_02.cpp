#include <iostream>

using namespace std;
    /**
    DIFERENCIA ENTRE LA DIVISION ENTERA Y LA DIVISION REAL EN C++

    TIPO DE DIVISION	OPERANDOS	        RESULTADO	COMPORTAMIENTO
    ENTERA	        AMBOS ENTEROS	    	ENTERO	   	DESCARTA LA PARTE DECIMAL
    REAL	        AL MENOS UNO REAL	REAL	   	CALCULA CON TODA LA PRECISION POSIBLE
    */

int main()
{
    /// INT/INT = INT
    cout << "15/6: " << 15/6 << endl;

    /// INT/FLOAT = FLOAT
    cout << "15/6.0: " << 15/6.0 << endl;

    /// INT/FLOAT = FLOAT
    cout << "15.0/6: " << 15.0/6 << endl;

    /// INT/FLOAT = FLOAT
    cout << "15.0/6.0: " << 15.0/6.0f << endl;

    return 0;
}
