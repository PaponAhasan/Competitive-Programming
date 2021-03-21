#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll a;
   while(cin>>a){

    if(a%2==0){
        cout<<"NO"<<"\n";
        continue;
    }

    cout<<"YES"<<"\n";
    vector<ll>v,vc;
    for(ll i=1,j=4; i<=a*2; i+=4,j+=4)
    {
        if(i<=2*a)
            v.push_back(i);
        if(j<=2*a && i!=j)
            v.push_back(j);
    }

    for(ll i=2,j=3; i<=a*2; i+=4,j+=4){
        if(i<=2*a)
            vc.push_back(i);
        if(j<=2*a && i!=j)
            vc.push_back(j);

    }
        for(auto x:v)
            cout<<x<<" ";
         for(auto x:vc)
            cout<<x<<" ";
        cout<<"\n";
   }
    return 0;
}
