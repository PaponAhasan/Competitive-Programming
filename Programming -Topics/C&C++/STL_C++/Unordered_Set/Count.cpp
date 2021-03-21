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

	for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) { 
		cout << *itr << " "; //25 5 10 15 20 
	} 

	if (sampleSet.count(20) == 1) { 
		cout << "\nElement 20 is present in the set"; //Element 20 is present in the set
	} 
	else { 
		cout << "\nElement 20 is not present in the set"; 
	} 

   /*---------------------------------------------------------------*/
        unordered_set<string> sampleSet;  
	sampleSet.insert("Welcome"); 
	sampleSet.insert("To"); 
	sampleSet.insert("GeeksforGeeks"); 
	sampleSet.insert("Computer Science Portal"); 
	sampleSet.insert("For Geeks"); 
	if (sampleSet.count("GeeksforGeeks") == 1) { 
		cout << "\nGeeksforGeeks is present in the set"; 
	} 
	else { 
		cout << "\nGeeksforGeeks is not present in the set"; 
	} 

	return 0; 
} 
