#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	set<int> s; 
	auto it = s.emplace_hint(s.begin(), 1); 

	// stores the position of 2's insertion 
	it = s.emplace_hint(it, 2); 

	// fast step as it directly 
	// starts the search step from 
	// position where 3 was last inserted 
	s.emplace_hint(it, 3); 

	// this is a slower step as 
	// it starts checking from the 
	// position where 3 was inserted 
	// but 0 is to be inserted before 1 
	s.emplace_hint(it, 0); 

	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; 
   //0 1 2 3
	return 0; 
} 
