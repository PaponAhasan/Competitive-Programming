#include <bits/stdc++.h>
using namespace std;

int main()
{
	list<int> demoList;

	demoList.push_back(10);
	demoList.push_back(20);
	demoList.push_back(30);
	demoList.push_back(40);

	cout << "Initial List: ";
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
		cout << *itr << " ";

	demoList.push_front(5);

	// List after adding elements to front
	cout << "\n\nList after adding elements to the front:\n";
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
		cout << *itr << " ";

	return 0;
}

