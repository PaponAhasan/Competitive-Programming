#include <iostream>
#include <string>
using namespace std;
int main() 
{
    double f = 23.43;
    double f2 = 1e-9;
    double f3 = 1e40;
    double f4 = 1e-40;
    double f5 = 123456789;
    string f_str = to_string(f);
    string f_str2 = to_string(f2); // Note: returns "0.000000"
    string f_str3 = to_string(f3); // Note: Does not return "1e+40".
    string f_str4 = to_string(f4); // Note: returns "0.000000"
    string f_str5 = to_string(f5);
         cout << "cout: " << f << '\n'
              << "to_string: " << f_str  << "\n\n"
              
              << "cout: " << f2 << '\n'
              << "to_string: " << f_str2 << "\n\n"
              
              << "cout: " << f3 << '\n'
              << "to_string: " << f_str3 << "\n\n"
              
              << "cout: " << f4 << '\n'
              << "to_string: " << f_str4 << "\n\n"
              
              << "cout: " << f5 << '\n'
              << "to_string: " << f_str5 << '\n';
}