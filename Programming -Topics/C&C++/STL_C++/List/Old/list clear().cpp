// CPP program to illustrate
// Implementation of clear() function
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> mylist{ 1, 2, 3, 4, 5 };

	mylist.clear();
	// List becomes empty

	// Printing the list
	for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;
	return 0;
}

