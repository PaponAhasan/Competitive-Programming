// CPP program to illustrate the
// list::front() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	list<int> demoList;

	demoList.push_back(10);
	demoList.push_back(20);
	demoList.push_back(30);
	demoList.push_back(40);

	int ele = demoList.front();

	cout << ele;

	return 0;
}

