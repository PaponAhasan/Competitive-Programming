// CPP program to illustrate 
// Application of push_back() function 
#include <iostream> 
#include <deque> 
using namespace std; 

int main() 
{ 
	int sum = 0; 
	deque<int> mydeque; 
	mydeque.push_back(11); 
	mydeque.push_back(2); 
	mydeque.push_back(5); 
	mydeque.push_back(3); 
	mydeque.push_back(7); 
	mydeque.push_back(1); 
	while (!mydeque.empty()) { 
		sum = sum + mydeque.front(); 
		mydeque.pop_front(); 
	} 
	cout << sum; 
	return 0; 
} 
