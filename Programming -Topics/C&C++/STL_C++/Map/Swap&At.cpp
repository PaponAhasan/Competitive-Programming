#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	map<int, char> map1, map2; 

	map1[1] = 'a'; 
	map1[2] = 'b'; 
	map1[3] = 'c'; 
	map1[4] = 'd'; 

	map2[5] = 'w'; 
	map2[6] = 'x'; 
	map2[7] = 'y'; 
	
	map2['w'] = 1; 
       map2['y'] = 2; 
       map2['z'] = 3; 

	swap(map1, map2); 

	for (auto it = map1.begin(); it != map1.end(); it++) 
	     cout<< it->first << "\t" << it->second << '\n'; 

	for (auto it = map2.begin(); it != map2.end(); it++) 
	    cout<< it->first << it->second << '\n'; 
	    
	cout <<map1.at(2) << endl;  //b
        cout << << map2.at('w') << endl;//1

	return 0; 
} 
