#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s("message");
 
    s = "abc";
    s.at(2) = 'x';
    cout << s << '\n'; //abx
 
    cout << "string size = " << s.size() << '\n';
    cout << "string capacity = " << s.capacity() << '\n';
}