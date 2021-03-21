// CPP program to illustrate the
// list::size() function
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

	// getting size of the list
	int size = demoList.size();

	cout << "The list contains " << size << " elements";

	return 0;
}

