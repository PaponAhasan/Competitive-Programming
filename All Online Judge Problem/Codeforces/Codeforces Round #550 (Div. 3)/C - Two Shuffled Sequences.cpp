#include "bits/stdc++.h"
using namespace std;
const int s=2e5;
int ck[s];
int main()
{
        int n;
        cin>>n;
        vector<int>v(n),vc,vk;
        int c=0;
        for(auto &x:v){
            cin>>x;
            ck[x]++;
            if(ck[x]>1)vc.push_back(x);
            else vk.push_back(x);
            if(ck[x]>2){
                c=1;
            }
        }
        
        if(c){
            cout<<"No"<<"\n";
            return 0;
        }
        
         sort(vc.begin(),vc.end());
        sort(vk.begin(),vk.end());
        reverse(vk.begin(),vk.end());
        
         cout<<"Yes"<<"\n";
         cout<<vc.size()<<"\n";
        for(auto x:vc)cout<<x<<" ";
        cout<<"\n";
         cout<<vk.size()<<"\n";
        for(auto x:vk)cout<<x<<" ";
        cout<<"\n";
        
        
    return 0;
}