// program below demonstrates the
// merge function in c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// declaring the lists
	// initially sorted
	list<int> list1 = { 10, 20, 30 };
	list<int> list2 = { 40, 50, 60 };

	// merge operation
	list2.merge(list1);

	cout << "List: ";

	for (auto it = list2.begin(); it != list2.end(); ++it)
		cout << *it << " ";

	return 0;
}

/*

// program below demonstrates the
// merge function in c++
#include <bits/stdc++.h>
using namespace std;

// comparator which compares elements internally
bool comparator(int first, int second)
{
	return first < second;
}
int main()
{
	// declaring the lists
	list<int> list1 = { 1, 70, 80 };
	list<int> list2 = { 2, 3, 4 };

	// merge operation
	list1.merge(list2, comparator);

	cout << "List: ";

	for (auto it = list1.begin(); it != list1.end(); ++it)
		cout << *it << " ";

	return 0;
}
*/
