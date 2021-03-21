#include <iostream>
#include <string>
using namespace std;

int main()
{
    s.empty();
   {  
    string s = "This is an exampl";
 
    s.push_back('e'); //appends a character to the end-> "This is an example"
    s.pop_back(); //removes the last character -> "This is an exampl
  }

  {
    string s("Exemplary");
    char& f = s.front();
    f = 'e';
    cout << s << '\n'; // "exemplary"
  }
 
  {
    string const c("Exemplary");
    char const& f = c.front();
    cout << &f << '\n'; // "Exemplary"
  }
  
  {
    string s("Exemplary");
    char& back = s.back();
    back = 's';
    cout << s << '\n'; // "Exemplars"
  }
 
  {
    string const c("Exemplary");
    char const& back = c.back();
    cout << back << '\n'; // 'y'
  }
}