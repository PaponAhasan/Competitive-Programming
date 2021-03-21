#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	map<int, int> mp, mp1; 

	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 

	mp1.insert(mp.begin(), mp.end()); 

	for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) { 
		cout << itr->first << itr->second << '\n'; 
	} 
	return 0; 
} 
