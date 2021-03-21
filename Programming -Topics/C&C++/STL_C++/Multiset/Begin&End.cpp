#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	int arr[] = { 14, 10, 15, 11, 10 }; 

	multiset<int> s(arr, arr + 5); 

	// Print the first element 
	cout << "The first element is: " << *(s.begin()) << endl; //10

	// prints all elements in set
	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; //10 10 11 14 15
/*-------------------------------------------------------*/		
	int arr[] = { 14, 10, 15, 11, 10, 12, 17, 12 }; 

    multiset<int> s(arr, arr + 8); 

    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; //10 10 11 12 12 14 15 17

	return 0; 
} 
