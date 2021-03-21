#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    int k;
    double long n;
    while(cin>>k>>n){
         //cout << setprecision(0) << fixed << pow(n,1.0L/k)<<'\n';
         cout << setprecision(0) << fixed << exp(log(n)/k)<<'\n';
    }
}

int main()
{
    Solve();
    return 0; 
}
/*
k^{n} = p
is equivalent to ln k^{n} = ln{p}
which is simply nlnk = ln p
or
lnk = lnp/n
thus k is: k=e^{lnp/n}
*/
