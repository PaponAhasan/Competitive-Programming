// CPP program to illustrate 
// application Of push_front() function 
#include <forward_list> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	forward_list<int> myforwardlist{}; 
	myforwardlist.push_front(43); 
	myforwardlist.push_front(58); 
	myforwardlist.push_front(24); 
	myforwardlist.push_front(6); 
	myforwardlist.push_front(45); 
	myforwardlist.push_front(89); 
	myforwardlist.push_front(7); 

	// Forward list becomes 7, 89, 45, 6, 24, 58, 43 
	// Sorting function 

	myforwardlist.sort(); 

	for (auto it = myforwardlist.begin(); it != myforwardlist.end(); ++it) 
		cout << ' ' << *it; 
} 
