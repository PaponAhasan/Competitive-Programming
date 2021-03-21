#include "bits/stdc++.h"
using namespace std;

int main()
{
        int n;
        cin>>n;
        vector<int>v(n),vc,vk;
        int even=0,odd=0,o=0,e=0;
        for(auto &x:v){
            cin>>x;
            if(x&1){
                odd+=x;
                o++;
                vc.push_back(x);
            }
            else{
                even+=x;
                e++;
                vk.push_back(x);
            } 
        }
        sort(vc.begin(),vc.end());
        reverse(vc.begin(),vc.end());
        sort(vk.begin(),vk.end());
        reverse(vk.begin(),vk.end());
        
        int s=0;
        //cout<<o<<" "<<e;
        //return 0;
        int mn=min(o,e);
        if(o>e){
            for(int i=e+1;i<vc.size();i++){
                s+=vc[i];
            }
        }
        else {
             for(int i=o+1;i<vk.size();i++){
                s+=vk[i];
            }
        }
        
        cout<<s<<"\n";
        
    return 0;
}