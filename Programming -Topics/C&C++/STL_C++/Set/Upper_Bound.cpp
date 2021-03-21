#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	set<int> s; 

	s.insert(1); 
	s.insert(4); 
	s.insert(2); 
	s.insert(5); 
	s.insert(6); 

	cout << "The set elements are: "; 
	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; //The set elements are: 1 2 4 5 6

	// when 2 is present 
	// points to next element after 2 
	auto it = s.upper_bound(2); 
	cout << "\nThe upper bound of key 2 is "; 
	cout << (*it) << endl;//The upper bound of key 2 is 4 

	// when 3 is not present 
	// points to next greater after 3 
	it = s.upper_bound(3); 
	cout << "The upper bound of key 3 is "; 
	cout << (*it) << endl; //The upper bound of key 3 is 4

	return 0; 
} 
