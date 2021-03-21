#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
       int n,d;
       cin>>n>>d;
       int ar[n];
       for(int i=0;i<n;i++){
           cin>>ar[i];
       }
       int ans=ar[0];
       bool f=false;
       for(int i=1;i<n;i++){
           for(int j=1;j<=ar[i];j++){
               if(d<i) d=0;
               if(d>0)
                 ans+=1;
               else {
                 break;
                 f=true;
               }
                d-=i;
           }
           if(f)break;
       }
       cout<<ans<<"\n";
    }
    return 0;
}

