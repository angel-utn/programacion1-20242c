#include <iostream>
using namespace std;

/***
   Incremente:
      i=CHICO; i<=GRANDE; i++
   Decremente:
      i=GRANDE; i>=CHICO; i--

*/

int main() {
   
   /// este da 20 repeticiones
   for(int i=1; i<=20 ; i++){
      if(i%2 == 0){
         cout << i << endl;   
      }
   }
   
   /// este da solo 10 repeticiones
   for(int i=2; i<=20 ; i+=2){
      cout << i << endl;
   }
   
   /// este da solo 10 repeticiones
   for(int i=20; i>=2 ; i-=2){
      cout << i << endl;
   }
   
   return 0;
}
