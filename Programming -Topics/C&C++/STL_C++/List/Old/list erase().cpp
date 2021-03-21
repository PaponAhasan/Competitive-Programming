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
	// first element
	cout << "List before deleting first element: ";
	for (auto itr = demoList.begin();
		itr != demoList.end(); itr++) {
		cout << *itr << " ";
	}

	// Creating iterator to point to first
	// element in the list
	list<int>::iterator itr = demoList.begin();

	// deleting the first element
	demoList.erase(itr);

	// Printing elements of list after deleting
	// first element
	cout << "\nList after deleting first element:";
	for (auto itr = demoList.begin();
		itr != demoList.end(); itr++) {
		cout << *itr << " ";
	}

	return 0;
}

