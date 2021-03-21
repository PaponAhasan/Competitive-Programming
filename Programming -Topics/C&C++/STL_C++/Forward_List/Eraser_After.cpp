#include <forward_list>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    forward_list<int> l = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 
    //    l.erase( l.begin() ); // ERROR: No function erase
 
    l.erase_after( l.before_begin() ); // Removes first element
 
    for( auto n : l ) cout << n << " ";//2 3 4 5 6 7 8 9 
 
    auto fi= next( l.begin() );
    auto la= next( fi, 3 );
 
    l.erase_after( fi, la );
 
    for( auto n : l ) cout << n << " "; //2 3 6 7 8 9 
}