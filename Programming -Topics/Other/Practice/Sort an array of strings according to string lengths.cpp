#include <bits/stdc++.h> 
using namespace std; 

bool compare(string &s1,string &s2) { 
	return s1.size() < s2.size(); 
} 

void printArraystring(string str[], int n) { 
	for (int i=0; i<n; i++) 
		cout << str[i] << " "; 
} 

int main() 
{ 
	string arr[] = {"GeeksforGeeks", "I", "from", "am"}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	// Function to perform sorting 
	sort(arr, arr+n, compare); 

	printArraystring(arr, n); 
	
	return 0; 
} 
