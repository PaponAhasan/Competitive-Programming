#include<string>
#include<iostream>
using namespace std;

int main()
{
    const string str="/root/config";
    auto const pos=str.find_last_of('/');
    const auto Ls=str.substr(pos+1);
 
    std::cout << Ls << '\n';
}