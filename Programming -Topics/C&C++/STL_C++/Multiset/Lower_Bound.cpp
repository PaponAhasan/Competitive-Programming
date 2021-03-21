// CPP program to demonstrate the 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	multiset<int> s; 
	s.insert(1); 
	s.insert(3); 
	s.insert(3); 
	s.insert(5); 
	s.insert(4); 

	// when 3 is present 
	auto it = s.lower_bound(3); 
	cout << "The lower bound of key 3 is "; 
	cout << (*it) << endl; 

	// when 2 is not present 
	// points to next greater after 2 
	it = s.lower_bound(2); 
	cout << "The lower bound of key 2 is "; 
	cout << (*it) << endl; 

	// when 10 exceeds the max element in multiset 
	it = s.lower_bound(10); 
	cout << "The lower bound of key 10 is "; 
	cout << (*it) << endl; 

	return 0; 
} 

/*
The lower bound of key 3 is 3
The lower bound of key 2 is 3
The lower bound of key 10 is 5
*/