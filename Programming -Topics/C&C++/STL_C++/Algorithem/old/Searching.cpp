#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << " ";
        cout<<"\n";
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(a) / sizeof(a[0]);

	show(a, n);
	sort(a, a + n);

	int item;
	cin>>item;

	if (binary_search(a, a + n, item))
		cout <<"Element "<<item<<" found in the array\n";
	else
		cout <<"Element "<<item<<" not found in the array\n";

	return 0;
}
