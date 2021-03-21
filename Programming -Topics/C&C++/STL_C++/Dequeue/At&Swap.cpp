#include <deque> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	deque<int> mydeque; 
	mydeque.push_back(3); 
	mydeque.push_back(4); 
	mydeque.push_back(1); 
	mydeque.push_back(7); 
	mydeque.push_back(3); 
	cout << mydeque.at(3); //7
	
	for (int i = 0; i < mydeque.size(); ++i) { 
        if (i % 2 == 0) { 
            cout << mydeque.at(i); //3 1 3 
        } 
    } 
    
    deque<int> mydeque1{ 1, 2, 3, 4 }; 
    deque<int> mydeque2{ 3, 5, 7, 9 };
    mydeque1.swap(mydeque2);
  /*mydeque1 = 3 5 7 9 
    mydeque2 = 1 2 3 4 */
	return 0; 
} 
