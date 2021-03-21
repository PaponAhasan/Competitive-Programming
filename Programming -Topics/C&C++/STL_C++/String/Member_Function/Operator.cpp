#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
   string str;
   str.reserve(50);
   cout << quoted(str) << '\n'; //""
 
   str += "This";
   cout << std::quoted(str) << '\n'; //"This"
 
   str += string(" is ");
   cout << quoted(str) << '\n';//"This is "
 
   str += 'a';
   cout << quoted(str) << '\n';//"This is a"
 
   str += {' ','s','t','r','i','n','g','.'};
   cout << quoted(str) << '\n';//"This is a string."
 
   str += 76.85;
   cout << quoted(str) << '\n';//"This is a string.L"
}