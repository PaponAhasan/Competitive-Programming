#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<char> characters;
    characters.assign(5, 'a');
    for (char c : characters) {
        cout << c << '\n';
    } 
    return 0;
}