#include<iostream> 
#include <string> 
#include <unordered_set> 
using namespace std; 

int main() 
{ 
	unordered_set<string> mySet = { "first", "third" }; 

	string myString = "tenth"; 
	mySet.insert(myString); //tenth first third

	return 0; 
} 
