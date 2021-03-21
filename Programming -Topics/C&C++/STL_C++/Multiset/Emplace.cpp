#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	multiset<pair<char, int>> ms; 
	ms.emplace('a', 24); 
	ms.insert(make_pair('b', 25));	 
	
	for (auto it = ms.begin(); it != ms.end(); ++it) 
		cout << " " << (*it).first << " "
			<< (*it).second << endl;
	/*------------------*/		
    int sum = 0; 
    multiset<int> mymultiset{}; 
    mymultiset.emplace(7); 
    mymultiset.emplace(9); 
    set<int>::iterator it; 
    while (!mymultiset.empty()) { 
        it = mymultiset.begin(); 
        sum = sum + *it; 
        mymultiset.erase(it); 
    } 
    cout << sum;
	return 0; 
} 
/*
 a 24
 b 25
 */