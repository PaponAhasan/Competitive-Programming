#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	map<int, int> mp; 

	mp.emplace(2, 30); 
	mp.emplace(1, 40); 
	mp.emplace(2, 20); 
	mp.emplace(1, 50); 
	mp.emplace(4, 50); 

	for (auto itr = mp.begin(); itr != mp.end(); itr++) 
		cout << itr->first << "\t" << itr->second << endl; 
		
	map<string, string> m;
        m.emplace(make_pair(string("a"), string("a")));
        m.emplace(make_pair("b", "abcd"));
        m.emplace("d", "ddd");
        m.emplace(piecewise_construct,
              forward_as_tuple("c"),
              forward_as_tuple(10, 'c'));
 
    for (const auto &p : m) {
        cout << p.first << " => " << p.second << '\n';
/*
a => a
b => abcd
c => cccccccccc
d => ddd
*/
	return 0; 
} 
