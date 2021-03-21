#include <iostream>
#include <map>
 
int main() {
  map<int, float> num_map;
  num_map[4] = 4.13;
  num_map[9] = 9.24;
  num_map[1] = 1.09;

  for (auto it = num_map.begin(); it != num_map.end(); ++it) {
    cout << it->first << ", " << it->second << '\n';
  }
	map<char, char> mp = { 
		{ 'a', 'A' }, 
		{ 'b', 'B' }, 
		{ 'c', 'C' }, 
		{ 'd', 'D' }, 
		{ 'e', 'E' }, 
	}; 

	for (auto i = mp.rbegin(); i != mp.rend(); ++i) 
		cout << i->first << i->second 
}