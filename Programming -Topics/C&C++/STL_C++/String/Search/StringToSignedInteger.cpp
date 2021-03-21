#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 with words";
    string str4 = "words and 2";
 
    int myint1 = stoi(str1); //converts a string to a signed integer(stol/stoll)
    double myint2 = stof(str2);//converts a string to a floating point value(stod/stoull)
    int myint3 = stoul(str3);//converts a string to an unsigned integer(stoull)
    // error: 'std::invalid_argument'
    // int myint4 = std::stoi(str4);
 
    cout << "stoi(\"" << str1 << "\") is " << myint1 << '\n';
    cout << "stoi(\"" << str2 << "\") is " << myint2 << '\n';
    cout << "stoi(\"" << str3 << "\") is " << myint3 << '\n';
    
    string name;
    getline(cin, name);
    cout<<name<<"\n";
}