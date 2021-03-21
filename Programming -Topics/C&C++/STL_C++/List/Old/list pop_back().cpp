// CPP program to illustrate the
// list::pop_back() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Creating a list
	list<int> demoList;

	// Adding elements to the list
	// using push_back()
	demoList.push_back(10);
	demoList.push_back(20);
	demoList.push_back(30);
	demoList.push_back(40);

	// Initial List:
	cout << "Initial List: ";
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
		cout << *itr << " ";

	// removing an element from the end of List
	// using pop_back
	demoList.pop_back();

	// List after removing element from end
	cout << "\n\nList after removing an element from end: ";
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
		cout << *itr << " ";

	return 0;
}

