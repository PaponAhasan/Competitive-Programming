#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 

int main() 
{ 
	map<int, int> gquiz1; 
	gquiz1.insert(pair<int, int>(1, 40)); 
	gquiz1.insert(pair<int, int>(2, 30)); 
	gquiz1.insert(pair<int, int>(3, 60)); 
	gquiz1.insert(pair<int, int>(4, 20)); 
	gquiz1.insert(pair<int, int>(5, 50)); 
	gquiz1.insert(pair<int, int>(6, 50)); 
	gquiz1.insert(pair<int, int>(7, 10)); 

	map<int, int>::iterator itr; 
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) { 
		cout << itr->first << itr->second << '\n'; 
	}
    1    40
    2    30
    3    60
    4    20
    5    50
    6    50
    7    10
	map<int, int> gquiz2(gquiz1.begin(), gquiz1.end()); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
		cout<< itr->first << itr->second << '\n'; 
	} 
    1    40
    2    30
    3    60
    4    20
    5    50
    6    50
    7    10
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3)); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
		cout << itr->first << itr->second << '\n'; 
	} 
    3    60
    4    20
    5    50
    6    50
    7    10

	// remove all elements with key = 4 
	int num; 
	num = gquiz2.erase(4); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) { 
		cout<< itr->first << itr->second << '\n'; 
	} 
    3    60
    5    50
    6    50
    7    10
	// lower bound and upper bound for map gquiz1 key = 5 
	cout << "gquiz1.lower_bound(5) : "
	cout << gquiz1.lower_bound(5)->first << '\t'; //KEY = 5
		<< gquiz1.lower_bound(5)->second << endl; //ELEMENT = 50
	cout << "gquiz1.upper_bound(5) : "
	cout << gquiz1.upper_bound(5)->first << '\t';  //KEY = 6
	cout << gquiz1.upper_bound(5)->second << endl; //ELEMENT = 50

	return 0; 
} 
