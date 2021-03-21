#include <iostream>
#include <cassert>
#include <iterator>
#include <string>
#include <cctype>
using namespace std;
 
int main()
{
  {
    string s;
    assert(s.empty() && (s.length() == 0) && (s.size() == 0));
  }
 
  {
    string s(4, '=');
    cout << s << '\n'; // "===="
  }
 
  {
    string const other("Exemplary");
    string s(other, 0, other.length()-1);
    cout << s << '\n'; // "Exemplar"
  }
 
  {
    string s("C-style string", 7);
    cout << s << '\n'; // "C-style"
  }
 
  {
    string s("C-style\0string");
    cout << s << '\n'; // "C-style"
  }
 
  {
    char mutable_c_str[] = "another C-style string";
    string s(begin(mutable_c_str)+8, end(mutable_c_str)-1);
    cout << s << '\n'; // "C-style string"
  }
 
  {
    string const other("Exemplar");
    string s(other);
    cout << s << '\n'; // "Exemplar"
  }
 
  {
    string s(string("C++ by ") + string("example"));
    cout << s << '\n'; // "C++ by example"
  }
 
  {
    string s({ 'C', '-', 's', 't', 'y', 'l', 'e' });
    cout << s << '\n'; // "C-style"
  }
 
  {
    string s(3, toupper('a'));
    cout << s << '\n'; // "AAA"
  }
}