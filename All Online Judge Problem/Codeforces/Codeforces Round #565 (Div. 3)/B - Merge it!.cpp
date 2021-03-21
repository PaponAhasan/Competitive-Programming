#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        vector<long long>v(n),vc;
        for(auto &x:v)cin>>x;
        long long Ans=0LL;
        for(auto x:v){
            if(x%3==0){
                Ans++;
                continue;
            }
            else vc.push_back(x%3);
        }
        
        int one=0,two=0;
        for(auto x:vc){
            if(x==2) two++;
            else one++;
        }
        
        if(two>=one){
            Ans+=one;
            two-=one;
            Ans+=(two/3);
        }
        else {
            Ans+=two;
            one-=two;
            Ans+=(one/3);
        }
        cout<<Ans<<"\n";
    }
    return 0;
}