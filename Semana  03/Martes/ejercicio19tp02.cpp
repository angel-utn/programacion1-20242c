/**
El costo de un desarrollo de un proyecto de software se calcula en
base al lenguaje que se necesita:

.--------.------.------------.
| Nombre | Tipo | Valor hora |
:--------+------+------------:
| C/C++  | 'C'  | $ 7500     |
| C#     | '#'  | $ 6100     |
| Python | 'P'  | $ 5400     |
| Go     | 'G'  | $ 5000     |
'--------'------'------------'

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la
cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)
*/

#include <iostream>
using namespace std;

int main(){
   const float VH_CPP = 7500, VH_CS = 6100, VH_PYTHON = 5400, VH_GO = 5000;
   int cantidadHoras;
   char tipoLenguaje;
   float valorHora, totalProyecto;
   bool urgente;

   cout << "Cantidad de horas: ";
   cin >> cantidadHoras;

   cout << endl;
   cout << " .--------.------.------------." << endl;
   cout << " | Nombre | Tipo | Valor hora |" << endl;
   cout << " :--------+------+------------:" << endl;
   cout << " | C/C++  | 'C'  | $ "<< VH_CPP << "     |" << endl;
   cout << " | C#     | '#'  | $ "<< VH_CS << "     |" << endl;
   cout << " | Python | 'P'  | $ "<< VH_PYTHON << "     |" << endl;
   cout << " | Go     | 'G'  | $ "<< VH_GO << "     |" << endl;
   cout << " '--------'------'------------'" << endl << endl;

   cout << "Tipo de lenguaje: ";
   cin >> tipoLenguaje;

   cout << "Urgente (1 - Si, 0 - No): ";
   cin >> urgente;

   switch (tipoLenguaje){
      case 'C':
         valorHora = VH_CPP;
      break;
      case '#':
         valorHora = VH_CS;
      break;
      case 'P':
         valorHora = VH_PYTHON;
      break;
      case 'G':
         valorHora = VH_GO;
      break;

   }

//   if (urgente == false){
//      totalProyecto = cantidadHoras * valorHora;
//   }
//   else{
//      totalProyecto = (cantidadHoras * valorHora) * 2.2;
//   }

   totalProyecto = cantidadHoras * valorHora;

   if (urgente == true){
      totalProyecto = totalProyecto * 2.2;
   }

   cout << endl << "::: Total del proyecto $ " << totalProyecto << endl;




	return 0;
}
