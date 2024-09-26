#include <iostream>
using namespace std;

int main() {
   int vec[5];
   int n;
   n = 0;
   vec[0] = 10;
   vec[1] = 20;
   vec[2] = 30;
   vec[3] = vec[2] + 10;
   vec[4] = vec[n];

   cout << "vec[2] = " << vec[2] << endl;
   cout << "vec[3] = " << vec[3] << endl;
   cout << "vec[4] = " << vec[4] << endl;
	
	return 0;
}

