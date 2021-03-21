#include <set>
#include <iostream>
 
int main()
{
    set<int> numbers;
    cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';
 
    numbers.insert(42);
    numbers.insert(13317); 
    cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';

    set<int> nums {1, 3, 5, 7};
    cout << "nums contains " << nums.size() << " elements.\n";
}