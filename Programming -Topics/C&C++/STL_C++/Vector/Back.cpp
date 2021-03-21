#include <vector>
#include <iostream>
using namespace std; 
int main()
{
    vector<char> letters {'a', 'b', 'c', 'd', 'e', 'f'};
    if (!letters.empty()) {
        cout << "The last character is: " << letters.back() << '\n';
    }  
}