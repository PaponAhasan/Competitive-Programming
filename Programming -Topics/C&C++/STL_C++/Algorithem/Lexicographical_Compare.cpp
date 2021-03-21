#include<iostream> 
#include<algorithm>
using namespace std; 

bool comp (char s1, char s2) 
{ 
	return tolower(s1)<tolower(s2); 
} 

int main() 
{ 
	char one[] = "geeksforgeeks"; 
	char two[] = "Gfg"; 
	
	// returns false as "g" has larger ASCII value than "G" 
	if( lexicographical_compare(one, one+13, two, two+3)) { 
		cout << "geeksforgeeks is lexicographically less than Gfg\n"; 
		
	} 
	else{ 
		cout << "geeksforgeeks is not lexicographically less than Gfg\n"; 
		
	} 
	
	// returns true this time as all converted into lowercase 
	if( lexicographical_compare(one, one+13, two, two+3, comp)) { 
		cout << "geeksforgeeks is lexicographically less "; 
		cout << "than Gfg( case-insensitive )"; 
		
	} 
	else{ 
		cout << "geeksforgeeks is not lexicographically less "; 
		cout<< "than Gfg( case-insensitive )"; 
		
	} 
	
} 
