#include <deque>
#include <iostream>
using namespace std; 

template<typename T>
void print(T const & xs)
{
    cout << "[ ";
    for(auto const & x : xs) {
        cout << x << ' ';
    }
    cout << "]\n";
}

int main( )
{
    deque<int> numbers;
 
    numbers.push_back(5);
    numbers.push_back(3);
    numbers.push_back(4);
    print(numbers); //5 3 4
 
    numbers.pop_back();
    print(numbers); //5 3

   numbers.push_front(10);
   numbers.push_front(8);
   print(numbers);// 8 10 5 3
   
   numbers.pop_front();
   print(numbers);//10 5 3
   
   numbers.emplace_back(23);
   print(numbers);//10 5 3 23
   
   numbers.emplace_front(12);
   print(numbers);//12 10 5 3 23
   
}