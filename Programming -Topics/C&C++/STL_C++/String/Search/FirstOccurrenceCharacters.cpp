#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = std::string("Hello World!");
 
    string search_str = std::string("o");
    const char* search_cstr = "Good Bye!";
 
    cout << str.find_first_of(search_str) << '\n';
    cout << str.find_first_of(search_str, 5) << '\n';
    cout << str.find_first_of(search_cstr) << '\n';
    cout << str.find_first_of(search_cstr, 0, 4) << '\n';
    // 'x' is not in "Hello World', thus it will return std::string::npos
    cout << str.find_first_of('x') << '\n';
}