#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
int main()
{
    int a,b,m;
    cin>>a>>b>>m;
   
    int mia=1e5,mib=1e5;
    
    vector<int>va(a),vb(b);
    for(auto &x:va){
        cin>>x;
        mia=min(mia,x);
    }
    
    for(auto &x:vb){
        cin>>x;
        mib=min(mib,x);
    }

    vector<LL>v;
   
    v.push_back(mia+mib);
    for(int i=0;i<m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        LL s;
        s=(va[x-1]+vb[y-1])-z;
        v.push_back(s);
    }
    
    LL rm=1e10;
    for(auto x:v)rm=min(rm,x);
    cout<<rm;
    return 0; 
}