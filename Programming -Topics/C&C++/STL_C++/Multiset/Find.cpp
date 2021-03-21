#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	multiset<char> s; 
	s.insert('a'); 
	s.insert('b'); 
	s.insert('c'); 
	s.insert('a'); 

	auto pos = s.find('b'); 
	for (auto it = pos; it != s.end(); it++) 
		cout << *it << " "; 
		
	multiset<int> example = {1, 2, 3, 4};
        auto search = example.find(2);
        if (search != example.end()) {
           cout << "Found " << (*search) << '\n';
        } else {
           cout << "Not found\n";
        }
        
        multiset<int> example = {1, 2, 3, 4};
 
        if(example.contains(2)) {
            cout << "Found\n";
        } else {
            cout << "Not found\n";
        }
	return 0; 
} 
