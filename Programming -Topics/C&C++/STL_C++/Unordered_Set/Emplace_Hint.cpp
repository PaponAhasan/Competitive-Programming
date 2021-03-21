#include <iostream> 
#include <unordered_set> 
using namespace std; 

int main() 
{ 

	unordered_set<int> uset = { 20, 40, 50, 60 }; 

	// Insert an element that is not present 
	uset.emplace_hint(uset.begin(), 80);
    uset.emplace_hint(uset.begin(), 50);
	cout << "uset: "; 
	for (auto it = uset.begin(); it != uset.end(); it++) 
		cout << *it << " "; //uset: 80 20 40 50 60
} 
