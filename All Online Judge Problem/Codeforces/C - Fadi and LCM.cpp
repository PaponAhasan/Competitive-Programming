#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x,y;
void solve(ll n){

      for(ll i=1;i*i<=n;i++){
        if(n%i==0LL){
            if(n==((i*n/i)/__gcd(i,n/i))){
              x=i;
              y=n/i;
            }
        }
    }
    cout<<x<<" "<<y<<"\n";
}

int main()
{
    scanf("%lld",&n);
    solve(n);

    return 0;
}
