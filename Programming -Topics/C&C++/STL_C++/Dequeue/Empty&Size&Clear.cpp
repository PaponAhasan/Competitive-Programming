#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> numbers;
    cout << "Initially, numbers.empty(): " << numbers.empty() << '\n'; //Yes empty (true:1)
 
    numbers.push_back(42);
    numbers.push_back(13317); 
    cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';//NO empty (false:0)
   
    cout << "nums contains " << nums.size() << " elements.\n";
    
   numbers.clear(); 
}