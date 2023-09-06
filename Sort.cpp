#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	int num[5] = {5, 4, 3, 2, 1};
	
	cout << "Before Sorting: ";
	for(int i = 0; i < 5; i++){
		cout << num[i] << " ";
	}
	
	cout << "\nAfter Sorting: ";
	for(int i = 4; i >= 0; i--){
		cout << num[i] << " ";
	}
	
	return 0;
}
