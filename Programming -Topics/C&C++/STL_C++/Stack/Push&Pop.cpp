#include <iostream> 
#include <stack> 
using namespace std; 

int main() 
{ 
	stack<int> mystack; 
	mystack.push(0); 
	mystack.push(1); 
	mystack.push(2); 

	// Printing content of stack 
	while (!mystack.empty()) { 
		cout << ' ' << mystack.top(); 
		mystack.pop(); 
	} 
	
	mystack.pop(); 
    mystack.pop(); 
    // Stack becomes 1, 2 
  
    while (!mystack.empty()) { 
        cout << ' ' << mystack.top(); 
        mystack.pop(); 
    } 
} 
