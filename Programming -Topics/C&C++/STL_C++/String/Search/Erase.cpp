#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str1 = "Text with some   spaces";
    str1.erase(remove(str1.begin(), str1.end(), ' '),
               str1.end());
    cout << str1 << '\n';
 
    string str2 = "Text\n with\tsome \t  whitespaces\n\n";
    str2.erase(remove_if(str2.begin(),str2.end(),
                              [](unsigned char x){return isspace(x);}),
               str2.end());
    cout << str2 << '\n';
}