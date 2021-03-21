#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 

	multiset<int> s; 
	s.insert(1); 
	s.insert(4); 
	s.insert(1); 
	s.insert(5); 
	s.insert(1); 

	for (auto it = s.begin(); it != s.end(); it++) 
		cout << *it << " "; //1 1 1 4 5
		
		
	auto itr = s.insert(s.begin(), 1); 
    itr = s.insert(itr, 4); 
    itr = s.insert(itr, 1); 
    itr = s.insert(itr, 5); 
    itr = s.insert(s.begin(), 3);
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; //1 1 3 4 5
    
    multiset<int> s2;
    s2.insert(s1.find(3), s1.end()); 
    for (auto it = s2.begin(); it != s2.end(); it++) 
        cout << *it << " "; //3 4 5

	return 0; 
} 
