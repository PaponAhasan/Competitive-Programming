#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
	map<int, int> mp; 

	mp.emplace_hint(mp.begin(), 2, 30); // faster 
	mp.emplace_hint(mp.begin(), 1, 40); // faster 
	mp.emplace_hint(mp.begin(), 3, 60); // slower 

	for (auto itr = mp.begin(); itr != mp.end(); itr++) 
		cout << itr->first << "\t" << itr->second << endl; 

	return 0; 
} 
