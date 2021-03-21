#include <iostream> 
#include <stack> 
using namespace std; 

int main() 
{ 
	int sum = 0; 
	stack<int> mystack; 
	mystack.push(1); 
	mystack.push(8); 
	mystack.push(3); 
	mystack.push(6); 
	mystack.push(2); 

	// Stack becomes 1, 8, 3, 6, 2 
        if (mystack.empty()) { 
        cout << "True"; 
        }  
        else { 
        cout << "False"; 
         } 
	while (!mystack.empty()) { 
		sum = sum + mystack.top(); 
		mystack.pop(); 
	} 
	cout << sum; //20
	return 0; 
} 
