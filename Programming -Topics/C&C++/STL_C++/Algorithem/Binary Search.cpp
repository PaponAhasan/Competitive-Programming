#include <algorithm> 
#include <iostream> 
using namespace std; 

void show(int a[], int arraysize) 
{ 
	for (int i = 0; i < arraysize; ++i) 
		cout << a[i] << " "; 
} 

int main() 
{ 
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
	int asize = sizeof(a) / sizeof(a[0]); 

	sort(a, a + asize);
	if (binary_search(a, a + 10, 2)) cout << "Element found in the array"<<"\n"; 
	else cout << "Element not found in the array"<<"\n";

	if (binary_search(a, a + 10, 10)) 
	   cout << "\nElement found in the array"<<"\n"; 
	else cout << "\nElement not found in the array"<<"\n"; 

	return 0; 
} 
