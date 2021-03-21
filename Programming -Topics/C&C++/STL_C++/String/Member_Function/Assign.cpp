#include <iostream>
#include <iterator>
#include <string>
using namespace std;
 
int main()
{
    {
        string s;
        s.assign(4, '=');
        cout << s << '\n'; // "===="
    }
    
    {
        string const c("Exemplary");
        s.assign(c);
        cout << c << "==" << s <<'\n'; // "Exemplary == Exemplary"
    }
    
    {
        s.assign(c, 0, c.length()-1);
        cout << s << '\n'; // "Exemplar";
    }
    
    {
        s.assign(std::string("C++ by ") + "example");
        cout << s << '\n'; // "C++ by example"
    }
    
    {
        s.assign("C-style string", 7);
        cout << s << '\n'; // "C-style"
    }
    
    {
        s.assign("C-style\0string");
        cout << s << '\n'; // "C-style"
    }
    
    {
        char mutable_c_str[] = "C-style string";
        s.assign(begin(mutable_c_str), end(mutable_c_str)-1);
        cout << s << '\n'; // "C-style string"
    }
    
    {
        s.assign({ 'C', '-', 's', 't', 'y', 'l', 'e' });
        cout << s << '\n'; // "C-style"
    }
}