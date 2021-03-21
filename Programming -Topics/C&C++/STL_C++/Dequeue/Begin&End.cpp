#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	deque<int> ints {1, 2, 4, 8, 16};
	deque<string> fruits {"orange", "apple", "raspberry"};
	deque<char> empty;

	int sum = 0;
	for (auto it = ints.begin(); it != ints.end(); it++){
		sum += *it;
		cout<<*it<<" ";
	}
	cout <<"\n"<<"Sum of ints: " << sum << "\n";
 
	// Prints the first fruit in the deque fruits, without checking if there is one.
	cout << "First fruit: " << *fruits.begin() << "\n";
 
	if (empty.begin() == empty.end())
		cout << "deque 'empty' is indeed empty.\n";
}