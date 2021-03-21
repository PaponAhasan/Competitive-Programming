#include <algorithm> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	int arr[] = { 1, 2, 3 };
	
	 sort(arr, arr + 3); 
        while(next_permutation(arr, arr + 3)){
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n"; 
	} 
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1    
	reverse(arr, arr + 3); 
	do { 
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n"; 
    } while (prev_permutation(arr, arr + 3));
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3
	cout << "After loop: " << arr[0] << ' '
		<< arr[1] << ' ' << arr[2] << '\n';
1 2 3

	return 0; 
} 
