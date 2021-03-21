#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<char> letters {'o', 'm', 'g', 'w', 't', 'f'};
 
    if (!letters.empty()) {
        cout << "The first character is: " << letters.front() << '\n';
    }

    deque<char> letters {'a', 'b', 'c', 'd', 'e', 'f'};
    if (!letters.empty()) {
        cout << "The last character is: " << letters.back() << '\n';
    }
}