#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	int arr[] = { 15, 10, 15, 11, 10, 18, 18, 18, 18 }; 
	multiset<int> s(arr, arr + 9); 

	cout << "18 occurs " << s.count(18) 
		<< " times in container"; 
	return 0; 
} 
