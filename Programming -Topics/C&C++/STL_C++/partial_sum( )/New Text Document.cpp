// C++ program to demonstrate working of accumulate() 
#include <iostream> 
#include <numeric> 
using namespace std; 

//user defined function 
int myfun(int x, int y) 
{ 
    return x + 2 * y; 
} 

int main () 
{ 
	int a[] = {1, 2, 3, 4, 5} ; 
	int b[5]; 
	
	partial_sum(a , a+5 , b); 

	for (int i=0; i<5; i++) 
	   cout << b[i] << ' '; 
	
	partial_sum(a , a+5 , b , myfun) ; 

	for (int i=0; i<5; i++) 
	    cout << b[i] << ' ';  

	return 0; 
} 
