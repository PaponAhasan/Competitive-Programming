#include <forward_list>
#include <iostream>
 
int main()
{
    std::forward_list<char> characters;
 
    characters.assign(5, 'a');
 
    for (char c : characters) {
        std::cout << c << '\n';
    } 
 
    return 0;
}