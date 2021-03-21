#include <bits/stdc++.h>
using namespace std;

int main()
{
	list<int> demo_list;

	cout << "Initial Size of the list: "
		<< demo_list.size() << endl;

	demo_list.push_back(10);
	demo_list.push_back(20);
	demo_list.push_back(30);

	// Size of list after adding
	cout << "Size of list after adding three "
		<< "elements: " << demo_list.size();

	return 0;
}

