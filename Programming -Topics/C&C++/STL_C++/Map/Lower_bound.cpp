#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	map<int, int> mp; 
	
	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 10 }); 
	mp.insert({ 5, 50 }); 
	mp.insert({ 4, 40 }); 

	auto it = mp.lower_bound(2); 
	cout << (*it).first << " " << (*it).second << endl; //2 30

	it = mp.lower_bound(3); 
	cout << (*it).first << " " << (*it).second; //4 40

	it = mp.lower_bound(6); 
	cout << (*it).first << " " << (*it).second; //4 0
	return 0; 
} 
