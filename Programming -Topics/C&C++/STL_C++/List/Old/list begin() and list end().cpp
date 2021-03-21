// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <list>
using namespace std;

int main()
{
	// declaration of list container
	list<int> mylist{ 1, 2, 3, 4, 5 };

	// using begin() to print list
	for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;
	return 0;
}

