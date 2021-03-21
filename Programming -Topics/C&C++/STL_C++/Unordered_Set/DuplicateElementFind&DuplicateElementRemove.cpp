#include <bits/stdc++.h> 
using namespace std; 

// Print duplicates in arr[0..n-1] using unordered_set 
void printDuplicates(int arr[], int n) 
{ 
	unordered_set<int> intSet; 
	unordered_set<int> duplicate; 

	for (int i = 0; i < n; i++) 
	{ 
		// if element is not there then insert that 
		if (intSet.find(arr[i]) == intSet.end()) 
			intSet.insert(arr[i]); 

		// if element is already there then insert into 
		// duplicate set 
		else
			duplicate.insert(arr[i]); 
	} 

    for (auto itr = intSet.begin(); itr != intSet.end(); itr++) 
	   cout << *itr << " "; //remove Duplicat item are : 9 8 5 1 2 4 3 7
	   
	cout << "Duplicate item are : "; 
	for (auto itr = duplicate.begin(); itr != duplicate.end(); itr++) 
		cout << *itr << " "; //Duplicate item are : 5 2 1 
} 

int main() 
{ 
	int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5}; 
	int n = sizeof(arr) / sizeof(int); 

	printDuplicates(arr, n); 
	return 0; 
} 
