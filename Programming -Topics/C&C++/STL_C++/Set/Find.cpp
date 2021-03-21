// CPP program to demonstrate the 
// set::find() function 
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

	// iterator pointing to 
	// position where 2 is 
	auto pos = s.find(3); 

	// prints the set elements 
	cout << "The set elements after 3 are: "; 
	for (auto it = pos; it != s.end(); it++) 
		cout << *it << " "; 
		
	//The set elements after 3 are: 3 4 5
       /*------------------------------------*/
        set<int> example = {1, 2, 3, 4};
 
       auto search = example.find(2);
       if (search != example.end()) {
        cout << "Found " << (*search) << '\n';
       }
       else {
        cout << "Not found\n";
       }

	return 0; 
} 
