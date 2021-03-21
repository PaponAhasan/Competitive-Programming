#include "bits/stdc++.h"
using namespace std;
#define ll long long

void solve()
{
    ll sz;
    cin>>sz;
    vector<ll>vc(sz),v;
    for(auto &x:vc)cin>>x;
    ll siz =vc.size(); 
    if(vc[siz-1]<0) vc.push_back(0);
    if(vc[siz-1]>0) vc.push_back(-1e18);
    
    ll mx=0LL,mn=-1e18,mxc=0LL,mnc=0LL;
    for(auto x:vc){
        if(x<0 and mxc){
            v.push_back(mx);
            mxc=0LL;
        }
        if(x>=0 and mnc){
            v.push_back(mn);
            mnc=0LL;
        }
        if(x>=0LL){
            mx=max(mx,x);
            mn=-1e18;
            mxc++;
            continue;
        }
        if(x<0LL){
           mn=max(mn,x);
           mx=0LL;
           mnc++;
           continue;
        }
    }
    
    ll Ans=0LL;
    for(auto x:v){
        Ans+=x;
    }
    cout<<Ans;
    cout<<"\n";
    vc.clear(); 
}

int main()
{
    int tc;
    cin>>tc;
    while(tc-->0){
        solve();
    }
    return 0;
}

