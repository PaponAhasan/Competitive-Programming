// C++ program to illustrate 
// map::erase(key) 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	map<int, int> mp; 

	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 60 }); 
	mp.insert({ 5, 50 }); 

	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first << itr->second << '\n'; 
	} 

	mp.erase(1); 
	mp.erase(2);
	3    60
        5    50
	
    auto it = mp.find(2); 
    mp.erase(it); 
    auto it1 = mp.find(5); 
    mp.erase(it1); 
    1    40
    3    60
    auto it1 = mp.find(2); 
    auto it2 = mp.find(5); 
    mp.erase(it1, it2); 
    1    40
    5    50

	for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
		cout << itr->first << itr->second << '\n'; 
	} 
	return 0; 
} 
