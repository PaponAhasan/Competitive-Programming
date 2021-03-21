#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' };

	int* i1;
	i1 = std::max_element(v, v + 4);

	cout << char(*i1) << "\n";
	return 0;
}
