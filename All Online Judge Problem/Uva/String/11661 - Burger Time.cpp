#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    while(cin>>l && l>0){
        string s;
        cin>>s;

        vector<int>v,vc,vk;
        int z=0;
        for(int i=0; i<l; i++){
            if(s[i]=='R')
                v.push_back(i);
            if(s[i]=='Z') z=1;
        }
        for(int i=0; i<l; i++){
            if(s[i]=='D')
                vc.push_back(i);
        }
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<vc.size(); j++){
                vk.push_back(abs(v[i]-vc[j]));
            }
        }
        int mn=1e7;
        for(auto x:vk)
            mn=min(mn,x);

        if(z) cout<<"0"<<"\n";
        else cout<<mn<<"\n";
    }
    return 0;
}

