// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;
    vector<int>::iterator it;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Output of begin and end: ";
	for ( it = g1.begin(); it != g1.end(); ++it)
		cout << *it << " ";

//	cout << "\nOutput of cbegin and cend: ";
//	for ( it = g1.cbegin(); it != g1.cend(); ++it)
//		cout << *it << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto it = g1.rbegin(); it != g1.rend(); ++it)
		cout << *ir << " ";

//	cout << "\nOutput of crbegin and crend : ";
//	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
//		cout << *ir << " ";

	return 0;
}

