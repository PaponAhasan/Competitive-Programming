#include <vector>
#include <iostream>
using namespace std; 
int main()
{
    vector<int> numbers {2, 4, 6, 8};
 
    cout << "Second element: " << numbers[1] << '\n';
 
    numbers[0] = 5;
 
    cout << "All numbers:";
    for (auto i : numbers) {
        cout << ' ' << i;
    }
    cout << '\n';
}