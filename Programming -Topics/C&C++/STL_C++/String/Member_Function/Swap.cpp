#include <string>
#include <iostream>
using namespace std;

int main()
{
    {
        string foo("quuuux");
        char bar[3]{};
        foo.copy(bar, sizeof bar);
        cout << bar << '\n'; //quu
    }
    
    {
        string a = "AAA";
        string b = "BBB";
        a.swap(b);
        cout << "after swap" << '\n';
        cout << "a: " << a << '\n'; //BBB
        cout << "b: " << b << '\n'; //AAA
    }
}