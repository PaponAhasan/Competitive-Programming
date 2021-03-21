#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str("The quick brown fox jumps over the lazy dog.");
 
    str.replace(10, 5, "red"); //a quick red fox jumps over the lazy dog.
 
    str.replace(str.begin(), str.begin() + 3, 1, 'A'); //A quick red fox jumps over the lazy dog.
}