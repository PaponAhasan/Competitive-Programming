#include "bits/stdc++.h"
using namespace std;
#define LL long long int

void solve()
{
    int n,k,Case=1;
    while(cin>>n){
        cin>>k;
        if(n==0 and k==0)break;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        sort(v.begin(),v.end());
        cout<<"CASE# "<<Case++<<":"<<"\n";
        for(int i=0;i<k;i++){
            int c;
            cin>>c;
            auto it=lower_bound(v.begin(),v.end(),c);
            if(v[it-v.begin()]==c) cout<<c<<" found at "<<it-v.begin()+1<<"\n";
            else cout<<c<<" not found"<<"\n";
        }
    }
   
}

int main()
{
    solve();
    return 0;
}
