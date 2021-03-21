#include <deque>
#include <iostream>
using namespace std; 

int main()
{
    deque<char> characters;
 
    characters.assign(5, 'a');
 
    for (char c : characters) {
        cout << c << '\n';
    } 
 
   /*
   a
   a
   a
   a
   a
  */
    return 0;
}