#include <iostream>
using namespace std;

/// Hacer una función que reciba el día y mes de un año y devuelva (return) la estación
/// del año correspondiente.

string ObtenerEstacionDelAnio(int dia, int mes);

int main(){

   string nombreEstacion;
   int dia, mes;

   for(mes = 1; mes <=12; mes++){
      for(dia = 1; dia <= 31; dia++){
         nombreEstacion = ObtenerEstacionDelAnio(dia, mes);
         cout << dia << "/" << mes << ": " << nombreEstacion << endl;
      }
   }

	return 0;
}

string ObtenerEstacionDelAnio(int dia, int mes){

   if ((dia >= 21 && mes == 9) || (dia <= 20 && mes == 12) || (mes == 10 || mes == 11)){
      return "Primavera";
   }
   if ((dia >= 21 && mes == 12) || (dia <= 20 && mes == 3) || (mes == 1 || mes == 2)){
      return "Verano";
   }
   if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 6) || (mes == 4 || mes == 5)){
      return "Otoño";
   }
   if ((dia >= 21 && mes == 6) || (dia <= 20 && mes == 9) || (mes == 7 || mes == 8)){
      return "Invierno";
   }
   else{
      return "Datos incorrectos";
   }


}
