#include <iostream>
#include <forward_list>
#include <string>
 
int main()
{
	forward_list<int> ints {1, 2, 4, 8, 16};
	forward_list<std::string> fruits {"orange", "apple", "raspberry"};
	forward_list<char> empty;
 
	int sum = 0;
	for (auto it = ints.begin(); it != ints.end(); it++)
		sum += *it;
	cout << "Sum of ints: " << sum << "\n";
 
	scout << "First fruit: " << *fruits.begin() << "\n";
 
	if (empty.begin() == empty.end())
		cout << "forward_list 'empty' is indeed empty.\n";
}