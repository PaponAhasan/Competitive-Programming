#include <list>
#include <iostream>
#include <iterator>
 
int main( )
{
    list<int> c{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : c) {
        cout << i << " ";//0 1 2 3 4 5 6 7 8 9
    }
    cout << '\n';
 
    c.erase(c.begin());
 
    for (auto &i : c) {
        cout << i << " ";//1 2 3 4 5 6 7 8 9
    }
    cout << '\n';
 
    list<int>::iterator range_begin = c.begin();
    list<int>::iterator range_end = c.begin();
    advance(range_begin,2);
    advance(range_end,5);
 
    c.erase(range_begin, range_end);
 
    for (auto &i : c) {
        std::cout << i << " ";//1 2 6 7 8 9
    }
    cout << '\n';
 
    // Erase all even numbers (C++11 and later)
    for (auto it = c.begin(); it != c.end(); ) {
        if (*it % 2 == 0) {
            it = c.erase(it);
        } else {
            ++it;
        }
    }
 
    for (auto &i : c) {
        std::cout << i << " ";//1 7 9
    }
    cout << '\n';
}