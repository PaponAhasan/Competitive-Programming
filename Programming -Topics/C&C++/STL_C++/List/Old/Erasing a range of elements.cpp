// CPP program to illustrate the
// list::erase() function
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
	demoList.push_back(50);

	// Printing elements of list before deleting
	// any element
	cout << "List before deleting any element: ";
	for (auto itr = demoList.begin();
		itr != demoList.end(); itr++) {
		cout << *itr << " ";
	}

	// Creating iterators of the list
	list<int>::iterator itr1, itr2;
	itr1 = demoList.begin();
	itr2 = demoList.begin();

	// Incrementing itr2 by 3 positions
	advance(itr2, 3);

	// deleting range of elements from index [0, 3)
	demoList.erase(itr1, itr2);

	// Printing elements of list after deleting
	// range of elements from [0, 3)
	cout << "\nList after deleting first three elements: ";
	for (auto itr = demoList.begin();
		itr != demoList.end(); itr++) {
		cout << *itr << " ";
	}

	return 0;
}

