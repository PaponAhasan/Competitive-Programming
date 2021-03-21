#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	map<int, int> mp; 

	mp.insert({ 2, 30 }); 
	mp.insert({ 1, 40 }); 
	mp.insert({ 3, 60 }); 
	mp.insert({ 4, 20 }); 
	mp.insert({ 5, 50 }); 

	if (mp.count(1)) 
		cout << "The key 1 is present\n"; //The key 1 is present
	else
		cout << "The key 1 is not present\n"; 

	if (mp.count(100)) 
		cout << "The key 100 is present\n"; 
	else
		cout << "The key 100 is not present\n"; //The key 100 is not present

	return 0; 
} 
