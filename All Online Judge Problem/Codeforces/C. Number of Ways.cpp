#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

     2x    x
    ----- ---
    1 2 3 0 3
    --- - ---
     x  x   x

int main()
{
    ll n;
    cin>>n;
    ll ar[n];
    ll s=0LL;
    for(int i=0; i<n; i++){
        cin>>ar[i];
        s+=ar[i];
    }
    if(s%3){
        cout<<"0"<<"\n";
    }
    else{
        ll sm=0LL,ok=0LL,Ans=0LL;
        ll one_third=s/3;
        ll two_third=(s/3)*2;
        for(int i=0; i<n-1; i++){
            sm+=ar[i];
            if(sm==two_third)
                Ans+=ok;
            if(sm==one_third)
                ok++;
        }
        cout<<Ans<<"\n";
    }
    return 0;
}

