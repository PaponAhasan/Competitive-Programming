#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{
	multiset <int, greater <int> > gquiz1;		 

	gquiz1.insert(40); 
	gquiz1.insert(30); 
	gquiz1.insert(60); 
	gquiz1.insert(20); 
	gquiz1.insert(50); 
	gquiz1.insert(50);
	gquiz1.insert(10); 

	multiset <int, greater <int> > :: iterator itr; 
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
	{ 
		cout<< *itr; //60     50    50    40    30    20    10
	} 

	// assigning the elements from gquiz1 to gquiz2 
	multiset <int> gquiz2(gquiz1.begin(), gquiz1.end()); 

	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout <<*itr;//10     20    30    40    50    50    60 
	} 

	cout <<"after removal of elements less than 30 :"; 
	gquiz2.erase(gquiz2.begin(), gquiz2.find(30)); 
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout <<*itr;//30    40    50    50    60 
	} 

	// remove all elements with value 50 in gquiz2 
	int num;
	num = gquiz2.erase(50);
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
	{ 
		cout<< *itr; //30    40    60
	} 
	
	//lower bound and upper bound for multiset gquiz1 
	cout<< *gquiz1.lower_bound(40) << endl; //40
	cout<< *gquiz1.upper_bound(40) << endl; //30

	//lower bound and upper bound for multiset gquiz2 
	cout<< *gquiz2.lower_bound(40) << endl; //40
	cout<< *gquiz2.upper_bound(40) << endl; //60
		
	return 0; 

} 
