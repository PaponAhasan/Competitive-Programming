#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
	int arr[] = {10, 20, 5, 23 ,42 , 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is: ";
	for (int i=0; i<n; i++)
		cout << vect[i] << " ";
        cout<<"\n";

	cout << "Maximum element of vector is:";
	cout << *max_element(vect.begin(), vect.end())<<"\n";

	cout << "Minimum element of vector is: ";
	cout << *min_element(vect.begin(), vect.end())<<"\n";

	// Starting the summation from 0
	///accumulate(first_iterator, last_iterator, initial value of sum)
	cout << "The summation of vector elements is: ";
	cout << accumulate(vect.begin(), vect.end(), 0)<<"\n";

	return 0;
}

