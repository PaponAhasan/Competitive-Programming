#include <vector>
#include <iostream>
using namespace std;

template<typename T>
void print(T const & xs)
{
    for(auto const & x : xs) {
        cout << x << ' ';
    }
    cout<<"\n";
}
 
int main()
{
    vector<int> numbers;
 
    numbers.push_back(5);
    numbers.push_back(3);
    numbers.push_back(4);
 
    print(numbers); //5 3 4 
 
    numbers.pop_back();
 
    print(numbers);//5 3 
    
    vector<int> v1{1, 2, 3};
    vector<int> v2{7, 8, 9};
    v2.swap(v1);
    print(v1); //7 8 9 
    print(v2); //1 2 3 
}