#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	set<int> s; 

	s.insert(1); 
	s.insert(4); 
	s.insert(2); 
	s.insert(5); 
	s.insert(3); 

	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; //The set elements are: 1 2 3 4 5 

	// Function returns lower bound and upper bound 
	auto it = s.equal_range(2); 
	cout << "\nThe lower bound of 2 is " << *it.first; //The lower bound of 2 is 2
	cout << "\nThe upper bound of 2 is " << *it.second;//The upper bound of 2 is 3 

	// Function returns the last element 
	it = s.equal_range(8); 
	cout << "\nThe lower bound of 8 is " << *it.first; //The lower bound of 8 is 5
	cout << "\nThe upper bound of 8 is " << *it.second; //The upper bound of 8 is 5

	// Function returns the range where the 
	// element greater than 0 lies 
	it = s.equal_range(0); 
	cout << "\nThe lower bound of 0 is " << *it.first; //The lower bound of 0 is 1
	cout << "\nThe upper bound of 0 is " << *it.second; //The upper bound of 0 is 1

	return 0; 
} 
