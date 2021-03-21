#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "This is an example";
 
    s.erase(0, 5); //is an example
 
    s.erase(find(s.begin(), s.end(), ' ')); //isan example
 
    s.erase(s.find(' ')); //isan
}
