#include <string>
#include <iostream>
using namespace std;

int main()
{
    std::string a = "0123456789abcdefghij";
 
    // count is npos, returns [pos, size())
    string sub1 = a.substr(10); //abcdefghij
 
    // both pos and pos+count are within bounds, returns [pos, pos+count)
    string sub2 = a.substr(5, 3); //567
 
    // pos is within bounds, pos+count is not, returns [pos, size()) 
    string sub4 = a.substr(a.size()-3, 50); //hij
}