/**
2) Una persona desea registrar los gastos realizados durante un mes. Ha definido que los gastos se
pueden categorizar en:

ID  Nombre
----------------------
1   Servicios
2   Alimentación
3   Limpieza
4   Transporte
5   Educación
6   Salud
7   Ocio
8   Impuestos
9   Vestimenta
10  Inversiones

Por cada gasto registrado se ingresa el siguiente registro:
- Dia (número entero [1; 31])
- ID de Categoría de gasto (número entero [1; 10])
- Importe del gasto (número real)

Nos solicitan hacer un programa que permita cargar cada uno de los gastos y elaborar una serie
de reportes. La información no se encuentra agrupada ni ordenada. No se saben de antemano
cuántos registros de gastos habrá. El fin de la carga de información se indica con un día igual a cero.

Calcular e informar:
A) Por cada categoría de gasto indicar el nombre (ID Categoria) y el total gastado en el mes.
B) La categoría de gasto en la que mayor dinero se haya gastado y cuál es dicha cantidad.
C) La cantidad de categorías de gasto que no hayan registrado movimientos.
D) Indicar los números de días en los que se hayan gastado en Alimentación pero no en Limpieza.
*/

#include <iostream>
using namespace std;
#include "funciones.h"

int main()
{
   /// A
   float gastosxCategoria[10] = {};
   string nombresxCategoria[10] = {  "Servicios   "
                                    ,"Alimentación"
                                    ,"Limpieza    "
                                    ,"Transporte  "
                                    ,"Educación   "
                                    ,"Salud       "
                                    ,"Ocio        "
                                    ,"Impuestos   "
                                    ,"Vestimenta  "
                                    ,"Inversion   "};

   /// D
   bool gastoEnAlimentacion[31] = {}, gastoEnLimpieza[31] = {};

   cargarGastos(gastosxCategoria, gastoEnAlimentacion, gastoEnLimpieza);
   puntoA(gastosxCategoria, nombresxCategoria, 10);
   puntoB(gastosxCategoria, nombresxCategoria, 10);
   puntoC(gastosxCategoria, 10);
   puntoD(gastoEnAlimentacion, gastoEnLimpieza, 31);



   return 0;
}
