#include <string>
#include <iostream>
using namespace std;
 
int main()
{
    string::size_type n;
    string const s = "This is a string";
 
    // search from beginning of string
    n = s.find("is");
     if (n == string::npos) {
        cout << "not found\n";
    } else {
        cout << "found: " << s.substr(n) << '\n';
    }
 
    // search from position 5
    n = s.find("is", 5);
     if (n == string::npos) {
        cout << "not found\n";
    } else {
        cout << "found: " << s.substr(n) << '\n';
    }
 
    // find a single character
    n = s.find('a');
     if (n == string::npos) {
        cout << "not found\n";
    } else {
        cout << "found: " << s.substr(n) << '\n';
    }
 
    // find a single character
    n = s.find('q');
     if (n == string::npos) {
        cout << "not found\n";
    } else {
        cout << "found: " << s.substr(n) << '\n';
    }
}