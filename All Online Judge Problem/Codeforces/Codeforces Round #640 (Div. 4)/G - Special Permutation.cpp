#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define LL long long
#define MXN 10000
#define MOD 10000007

ifstream f("data.in");
ofstream g("data.out");

void solve(){
    LL n;
    cin>>n;
    if(n<4){
        cout<<"-1"<<"\n";
        return;
    }
    LL m = n;
    for(int i=((m%2)?--m:m);i>=2;i-=2){
        if(i==4) continue;
        cout<<i<<" ";
    }
    cout<<"4"<<" ";
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<"\n";
} 

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}