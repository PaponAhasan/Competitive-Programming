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
    vector<int> vec(3,100);
    print_vec(vec); //100 100 100
 
    auto it = vec.begin();
    it = vec.insert(it, 200);
    print_vec(vec);//200 100 100 100
 
    vec.insert(it,2,300);
    print_vec(vec);//300 300 200 100 100 100
 
    it = vec.begin();
 
    vector<int> vec2(2,400);
    vec.insert(it+2, vec2.begin(), vec2.end());
    print_vec(vec);// 300 300 400 400 200 100 100 100
 
    int arr[] = { 501,502,503 };
    vec.insert(vec.end(), arr, arr+3);
    print_vec(vec);//300 300 400 400 200 100 100 100 501 502 503
}