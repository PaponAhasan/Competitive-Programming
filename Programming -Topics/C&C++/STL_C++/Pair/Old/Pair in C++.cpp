//CPP program to illustrate pair STL

///Syntax :
///pair (data_type1, data_type2) Pair_name;

#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair <int, char> PAIR1 ;

	PAIR1.first = 100;
	PAIR1.second = 'G' ;

	cout << PAIR1.first << " " ;
	cout << PAIR1.second << endl ;



	pair <string,double> PAIR2 ("GeeksForGeeks", 1.23);

    cout << PAIR2.first << " " ;
    cout << PAIR2.second << endl ;

	return 0;
}

