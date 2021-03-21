#include "bits/stdc++.h"
using namespace std;

#define MOD 1000000007
long long a,Pow,ll;

long long int power (long long int a, long long int b) {
    long long int ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
}

void Shapes(){
    ll=pow(2,Pow/2);
    cout<<ll<<"\n";
}

int main() {
    cin>>Pow;
    if(Pow%2) cout<<"0"<<"\n";
    else Shapes();
    return 0;

