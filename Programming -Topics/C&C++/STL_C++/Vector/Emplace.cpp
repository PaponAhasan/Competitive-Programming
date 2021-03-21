#include <iostream>
#include <vector>
using namespace std;

void print_vec(const vector<int>& vec)
{
    for (auto x: vec) {
         cout << ' ' << x;
    }
    cout << '\n';
}
 
int main ()
{
    vector<int> vec = { 10, 20, 30 }; 
    
    auto it = vec.emplace(vec.begin(), 15);
     print_vec(vec);// 15 10 20 30
     
     it = vec.emplace(vec.end(), 16);
     print_vec(vec);//15 10 20 30 16
     
     it = vec.emplace(vec.begin() + 2, 16);
     print_vec(vec);// 15 10 16 20 30 16
     
     vec.emplace_back(100);
     print_vec(vec);//15 10 16 20 30 16 100
     
     vector<string> myvector;
     myvector.emplace_back("This");
     
     vector<char> myvector; 
    myvector.emplace_back('a');
    
    vector<pair<char, int>> vect; 
    vect.emplace_back('a', 24); 
}