#include <iostream>
using namespace std;

int main()
{	
    int num[15] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10, x = 69, ind = 1;
	
	cout << "Before insertion: ";
 	for(int i = 0; i < n; i++){
        cout << num[i]<<" ";
    }
    cout << endl;
   
 	for (int i = n - 1; i >= ind; i--){
        num[i + 1] = num[i];
    }
    num[ind] = x;
    
    n++;
 
    cout << "After insertion: ";
    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }
 
    return 0;
}
