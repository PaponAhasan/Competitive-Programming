#include <iostream> 
#include <unordered_set> 
using namespace std; 
int main() 
{ 
	unordered_set<int> sample; 

	sample.insert({ 20, 30, 40 }); 

	auto range1 = sample.equal_range(20); 
	if (range1.first != sample.end()) { 
		for (; range1.first != range1.second; ++range1.first) 
			cout << *range1.first << endl; //20
	} 
	else
		cout << "Element does not exist"; 
	return 0; 
} 
