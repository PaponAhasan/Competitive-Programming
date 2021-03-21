
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Tc;
ll a;

void solve(ll ar[],vector<ll>vc){

    ll s=0LL;
    for(auto x:vc){
        s=s+x;
    }

    ll sm,flag=1;
     sm=0LL;

    for(int i=0;i<a-1;i++){

            sm+=ar[i];
            if(sm>=s){
                flag=0;
                break;
            }

            if(sm<0)
             sm=0LL;
        }

          sm=0LL;
           for(int i=1;i<a;i++){

            sm+=ar[i];
            if(sm>=s){
                flag=0;
                break;
            }

            if(sm<0)
             sm=0LL;
        }

    //for(int i=0;i<a;i++){
        //for(int j=i;((i==0)?(j<a-1):j<a);j++){
            //for(int k=i;k<=j;k++){
                //sm=sm+ar[k];
            //}
            //v.push_back(sm);
            //sm=0LL;
       // }
    //}

    //ll mx=0LL;
    //for(auto x:v){
        //mx=max(mx,x);
   // }

    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

int main()
{
    cin>>Tc;
    while(Tc--){
        vector<ll>vc;
        scanf("%lld",&a);
        ll ar[a];
        for(int i=0;i<a;i++){
            cin>>ar[i];
            vc.push_back(ar[i]);
        }
        solve(ar,vc);
    }

    return 0;
}
