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

	for (int i=0; i<n; i++)
		cout << vect[i] << " ";
        cout<<endl;

	sort(vect.begin(), vect.end());

	for (int i=0; i<n; i++)
	cout << vect[i] << " ";
	cout<<endl;

	reverse(vect.begin(), vect.end());

	for (int i=0; i<6; i++)
		cout << vect[i] << " ";
		cout<<endl;
	return 0;
}
