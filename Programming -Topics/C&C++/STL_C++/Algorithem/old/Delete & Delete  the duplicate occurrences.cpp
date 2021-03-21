#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);

	cout << "Vector is :";
	for (int i=0; i<vect.size(); i++)
		cout << vect[i]<<" ";

	// Delete second element of vector
	vect.erase(vect.begin()+1);

	cout << "\nVector after erasing the element: ";
	for (int i=0; i<vect.size(); i++)
		cout << vect[i] << " ";

	/// sorting to enable use of unique()
	sort(vect.begin(), vect.end());

	/// Deletes the duplicate occurrences
	vect.erase(unique(vect.begin(),vect.end()),vect.end());

	cout << "\nVector after deleting duplicates: ";
	for (int i=0; i< vect.size(); i++)
		cout << vect[i] << " ";

	return 0;
}

