// CPP program to illustrate the
// list::end() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Creating a list
	list<int> demoList;

	// Add elements to the List
	demoList.push_back(10);
	demoList.push_back(20);
	demoList.push_back(30);
	demoList.push_back(40);

	// using end() to get iterator
	// to past the last element
	list<int>::iterator it = demoList.end();

	// This will not print the last element
	cout << "Returned iterator points to : " << *it << endl;

	// Using end() with begin() as a range to
	// print all of the list elements
	for (auto itr = demoList.begin();
		itr != demoList.end(); itr++) {
		cout << *itr << " ";
	}

	return 0;
}
