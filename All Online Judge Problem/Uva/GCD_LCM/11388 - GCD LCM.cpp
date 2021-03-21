/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc-- >0){
        ll a,b;
        scanf("%lld%lld",&a,&b);
        if(a>b) swap(a,b);

       if(b%a){
           cout<<"-1"<<"\n";
          continue;
       }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
