#include <iostream>
using namespace std;

void ObtenerEstacionDelAnio(int dia, int mes, string &nombreEstacion);

int main(){

   string estacionDelAnio = "Desconocido";
   int dia, mes;

   for(mes = 1; mes <=12; mes++){
      for(dia = 1; dia <= 31; dia++){
         ObtenerEstacionDelAnio(dia, mes, estacionDelAnio);
         cout << dia << "/" << mes << ": " << estacionDelAnio << endl;
      }
   }

	return 0;
}

void ObtenerEstacionDelAnio(int dia, int mes, string &nombreEstacion){

   if ((dia >= 21 && mes == 9) || (dia <= 20 && mes == 12) || (mes == 10 || mes == 11)){
      nombreEstacion = "Primavera";
   }
   else if ((dia >= 21 && mes == 12) || (dia <= 20 && mes == 3) || (mes == 1 || mes == 2)){
      nombreEstacion = "Verano";
   }
   else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 6) || (mes == 4 || mes == 5)){
      nombreEstacion = "Otoño";
   }
   else if ((dia >= 21 && mes == 6) || (dia <= 20 && mes == 9) || (mes == 7 || mes == 8)){
      nombreEstacion = "Invierno";
   }
   else{
      nombreEstacion = "Datos incorrectos";
   }

}
