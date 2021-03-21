// CPP program to illustrate
// Implementation of swap() function
#include <iostream>
#include <list>
using namespace std;

int main()
{
	// list container declaration
	list<int> mylist1{ 1, 2, 3, 4 };
	list<int> mylist2{ 3, 5, 7, 9 };

	// using swap() function to
	//swap elements of lists
	mylist1.swap(mylist2);

	// printing the first list
	cout << "mylist1 = ";
	for (auto it = mylist1.begin();it != mylist1.end(); ++it)
		cout << ' ' << *it;

	// printing the second list
	cout << endl
		<< "mylist2 = ";
	for (auto it = mylist2.begin();it != mylist2.end(); ++it)
		cout << ' ' << *it;
	return 0;
}

