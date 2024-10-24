#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


/**

33
32
30
16
15
12
10
9
7
6
1


--> 6

*/

void ordenar(int vector[], int cant)
{
   int  mas_grande, temp;
   
   for (int actual = 0; actual < cant - 1; actual++)
   {
      mas_grande = actual;
      
      for (int j = actual + 1; j < cant; j++){
         if (vector[j] > vector[mas_grande]){
            mas_grande = j;
         }
      }
      
      /// guia 1 - ejercio 2
      temp = vector[actual];
      vector[actual] = vector[mas_grande];
      vector[mas_grande] = temp;
   }
}
/*
void cargarPuntos(int ranking[]){
   cout << "Ingrese un nuevo puntaje: ";
   
   cin >> ranking[10];
   ordenar(ranking);   
}
*/
void cargarPuntos(int ranking[]){
   int puntos;
   cout << "Ingrese un nuevo puntaje: ";
   
   cin >> puntos;
   
   if(puntos > ranking[9]){
      ranking[9] = puntos;
      ordenar(ranking, 10);
   }
}

void mostrarRanking(int ranking[]){
   cout << "RANKING " <<endl;
   for(int i=0; i <10; i++){
      if(ranking[i] != 0){
         cout << "#" 
            << setfill('0') << setw(2) << i+1 
            << setfill('.')<< setw(10) << ranking[i] << endl;     
      }
   }
}
   
void cargarPuntosAutomaticos(int ranking[]){
   for(int i=0; i <10; i++){
      ranking[i] = rand() % 20 + 1;
   }
   
   ordenar(ranking, 10);
}

int main() {
   int opcion;
   int ranking[10]{};
   srand(time(0));
   
   do{
      system("cls");
      cout << "MENU PRINCIPAL"<<endl;
      cout << "1- Cargar Puntos" << endl;
      cout << "2- Mostrar Ranking" << endl; 
      cout << "0- Salir" << endl;
      cin >> opcion;
      
      switch(opcion){
         case 11:
            cargarPuntosAutomaticos(ranking);
            break;
         case 1:
            cargarPuntos(ranking);
            break;
         case 2:
            mostrarRanking(ranking);
            break;
      case 0:
            cout << "Gracias por utilizar mi App, pagame!" << endl;
            break;
      }
      system("pause");
   }while(opcion != 0);
   
	return 0;
}

