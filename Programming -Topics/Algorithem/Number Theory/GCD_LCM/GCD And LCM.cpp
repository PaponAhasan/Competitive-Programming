#include <bits/stdc++.h>
using namespace std;

template <typename T> T gcd(T a,T b){
    if(a < 0)return gcd(-a,b);
    if(b < 0)return gcd(a,-b);
    return (b == 0)?a:gcd(b,a%b);
}
template <typename T> T lcm(T a,T b) {
    if(a < 0)return lcm(-a,b);
    if(b < 0)return lcm(a,-b);
    return a*(b/gcd(a,b));
}


int main() {
   cout<<gcd(20,10);
   cout<<lcm(20,10);
   return 0;
}