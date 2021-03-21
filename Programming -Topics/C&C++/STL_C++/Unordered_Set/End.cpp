#include <iostream> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 
	unordered_set<int> sampleSet = 
			{ 5, 10, 15, 4, 2, 7, 8, 6 }; 
	for (auto it = sampleSet.begin(); it != sampleSet.end(); 
														it++) 
	{ 
		cout << *it << " "; 
	} 

	return 0; 
} 
