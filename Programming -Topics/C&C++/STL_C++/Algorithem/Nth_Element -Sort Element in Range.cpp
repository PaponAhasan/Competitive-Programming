#include <iostream> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
        //All elements to its left are smaller than it and all elements to its right are greater than it.
	int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 };
	nth_element(v, v + 4, v + 8); //3 2 10 23 33 56 45 47
        
         //First 4 element same position But last greater
        int v[] = { 100, 2, 10, 45, 33, 56, 23, 47 }, i; 
        nth_element(v + 4, v + 5, v + 8);//100 2 10 45 23 33 47 56 

	return 0; 
} 
