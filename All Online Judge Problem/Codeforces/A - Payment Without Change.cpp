/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,s,x,y;
        cin>>a>>b>>n>>s;

        x=s/n;
        y=s-(x*n);

        if(x<=a && y<=b){
            cout<<"Yes"<<"\n";
        }
        else if(a*n<=s && (s-(a*n))<=b){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }

    }
    return 0;
}
