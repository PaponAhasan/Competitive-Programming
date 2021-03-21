#include<bits/stdc++.h> 

int main () 
{ 
	vector<int> vec { 10, 20, 30, 40 }; 
	
	svector<int>::iterator it;
	int ser = 30; 
	
	it = find (vec.begin(), vec.end(), ser); 
	if (it != vec.end()) 
	{ 
		cout << "Element " << ser <<" found at position : " ; 
		cout << it - vec.begin() << " (counting from zero) \n" ; 
	} 
	else
		cout << "Element not found.\n\n"; 
		
	return 0; 
	//Element 30 found at position : 2 (counting from zero)
} 
