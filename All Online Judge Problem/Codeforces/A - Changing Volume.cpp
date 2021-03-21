#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const ll n=2e6+20,P=1e6;
const double pi = acos(-1.0);

#define precision(a) cout << fixed << setprecision(a)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define MAX_SIZE 100100
#define mod 1000000007
#define PI 2*acos(0.0)

#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)

int main()
{
    ios::sync_with_stdio(false);
     cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll dif,x,y,ok=0;
        cin>>x>>y;

        dif=abs(x-y);

        ok+=dif/5;
        dif%=5;
        ok+=dif/2;
        dif%=2;
        ok+=dif/1;

        cout<<ok<<endl;
    }

    return 0;
}
