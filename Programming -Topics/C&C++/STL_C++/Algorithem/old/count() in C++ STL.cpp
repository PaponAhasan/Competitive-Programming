// C++ program for count in C++ STL for
// array
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Number of times 3 appears : "
		<< count(arr, arr + n, 3);

	return 0;
}

/*
// C++ program for count in C++ STL for
// a vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ///string str = "geeksforgeeks";

    ///cout << "Number of times 'e' appears : "
        /// << count(str.begin(), str.end(), 'e');
	vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
	cout << "Number of times 3 appears : "
		<< count(vect.begin(), vect.end(), 3);

	return 0;
}
*/
