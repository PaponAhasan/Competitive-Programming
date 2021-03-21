#include <iostream> 
#include <unordered_set> 

using namespace std; 

int main() 
{ 
	unordered_set<int> sampleSet; 
	sampleSet.insert(5); 
	sampleSet.insert(10); 
	sampleSet.insert(15); 
	sampleSet.insert(20); 
	sampleSet.insert(25); 

	auto itr1 = sampleSet.begin(); 
	auto itr2 = sampleSet.begin(4); 

	cout << "First element in the container is: " << *itr1; 
	cout << "\nFirst element in the bucket 4 is: " << *itr2; 

	return 0; 
} 
