#include <iostream> 
#include <list>
using namespace std; 

int main() 
{ 
	list<int> list1; 
	
	// creates 3 occurrences of "2" 
	list1.assign(3, 2); 

	list<int>::iterator it = list1.begin(); 

	// iterator to point to 3rd position 
	advance(it, 2); 

	// using insert to insert 1 element at the 3rd position 
	// inserts 5 at 3rd position 
	list1.insert(it, 5); 
	
	for (list<int>::iterator i = list1.begin(); 
		i != list1.end(); 
		i++) 
		cout << *i << " ";  //2 2 5 2 

	cout << endl; 

	// using insert to insert 
	// 2 element at the 4th position 
	// inserts 2 occurrences 
	// of 7 at 4th position 
	list1.insert(it, 2, 7); 

	for (list<int>::iterator i = list1.begin(); 
		i != list1.end(); 
		i++) 
		cout << *i << " "; //2 2 5 7 7 2

	cout << endl; 
} 
