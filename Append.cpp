#include <iostream>
using namespace std;

int main() {
	int z = 50;
   int num[z] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int n = 10;
   
   cout << "Array before append: ";
   for(int i = 0; i < n; i++){
      cout << num[i] << " ";
   }
   cout << endl;

   num[n] = 69;
   n += 1;
   
   cout << "Array after append: ";
   for(int i = 0; i < n; i++){
      cout << num[i] << " ";
   }
   
	return 0;
}
