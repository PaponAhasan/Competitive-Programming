/// Syntax :
/// pair& operator= (const pair& pr);

//CPP code to illustrate operators in pair
#include <iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int, int>pair1 = make_pair(1, 12);
	pair<int, int>pair2 = make_pair(9, 12);


	cout << (pair1 == pair2) << endl;
	cout << (pair1 != pair2) << endl;
	cout << (pair1 >= pair2) << endl;
	cout << (pair1 <= pair2) << endl;
	cout << (pair1 > pair2) << endl;
	cout << (pair1 < pair2) << endl;

	return 0;
}

