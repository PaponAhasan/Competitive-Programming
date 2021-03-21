#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
    string s = "test";
    if(s.find('a') == string::npos)
        cout << "'a' not found\n";

    string s2(s, 2, string::npos);
    cout << s2 << '\n'; //st
 
    bitset<5> b("aaabb", string::npos, 'a', 'b');
    cout << b << '\n';//00011
}