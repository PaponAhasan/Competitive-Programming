#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define LL long long
#define MXN 10000
#define MOD 10000007

ifstream f("data.in");
ofstream g("data.out");

void solve(){
    LL n,k;
    cin>>n>>k;
    
    LL r = k/n;
    LL m = r;
    while(true){
        LL a = k/n;
         k +=m;
        LL y = k/n;
        m = y - a;
        if(a == y)break;
    }
    cout<<k<<"\n";
} 

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}