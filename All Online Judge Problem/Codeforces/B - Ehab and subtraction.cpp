#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main() {
    LL n,m;
    cin>>n>>m;
    LL ar[n];
    set<LL>st;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        st.insert(ar[i]);
    }
    vector<LL>v,vc ;
    for(auto x:st) v.push_back(x);
    LL x=0,k=m;
    if(v.size()<m) m=v.size();
    for(int i=0;i<m;i++){
         vc.push_back(v[i]-x);
         x=v[i];
    }
    for(auto x:vc)cout<<x<<"\n";
    for(int i=0;i<k-vc.size();i++)
       cout<<"0"<<"\n";
    return 0;
}
