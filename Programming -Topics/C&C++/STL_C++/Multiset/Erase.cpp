#include <bits/stdc++.h> 
using namespace std; 

int main() 

	multiset<int> multi_set; 
	multiset<int>::iterator ms_iterator; 

	for (int i = 1; i < 10; i++) { 
		multi_set.insert(i); 
	} 

	for (ms_iterator = multi_set.begin(); ms_iterator != multi_set.end(); ++ms_iterator)
	      cout<< *ms_iterator; //1 2 3 4 5 6 7 8 9

	ms_iterator = multi_set.begin(); 
	ms_iterator++; 
	multi_set.erase(ms_iterator); //remove 2
    
    multi_set.erase(5);//remove 5
    
    ms_iterator = multi_set.begin(); 
    ms_iterator++; 
    ms_iterator++;
    auto ir = multi_set.erase(ms_iterator, multi_set.end());//remove begin thake -->3
    
	for (ms_iterator = multi_set.begin(); ms_iterator != multi_set.end(); ++ms_iterator) 
         cout <<*ms_iterator;//4 6 7 8 9 
	return 0; 
} 
