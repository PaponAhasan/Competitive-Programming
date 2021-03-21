// C++ program to illustrate the
// list::emplace() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// declaration of list
	list<int> lis = { 5, 6, 7, 8, 9, 10 };

	auto it = lis.emplace(lis.begin(), 2);

	// inserts at the beginning of the list
	lis.emplace(it, 1);

	cout << "List: ";
	for (auto it = lis.begin(); it != lis.end(); ++it)
		cout << *it << " ";

	return 0;
}

/*

// C++ program to illustrate the
// list::emplace() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// declaration of list
	list<pair<int, char> > lis;

	// inserts at the beginning of the list
	auto it = lis.emplace(lis.begin(), 4, 'a');

	// inserts at the beginning of the list
	lis.emplace(it, 3, 'b');

	cout << "List: ";

	for (auto it : lis)
		cout << "(" << it.first << ", " << it.second << ") ";

	return 0;
}

*/
