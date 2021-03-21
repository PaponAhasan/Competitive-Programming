#include <deque> 
#include <iostream> 
using namespace std; 

int main() 
{ 
	deque<int> sample = { 2, 3, 4, 5 }; 

	deque<int>::iterator itr; 

	sample.emplace(sample.begin(), 1); 
	
	for (itr = sample.begin(); itr != sample.end(); ++itr) 
		cout << *itr << " "; //1 2 3 4 5

	cout << endl; 
	
    /*----------------------------------------*/
    deque<char> sample = { 'G', 'E', 'K', 'S' }; 
    deque<char>::iterator itr = sample.begin(); 
    ++itr; 

    sample.emplace(itr, 'E'); 
  
    for (itr = sample.begin(); itr != sample.end(); ++itr) 
        cout << *itr; //GEEKS
    cout << endl; 
	return 0; 
} 
