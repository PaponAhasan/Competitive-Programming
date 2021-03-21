#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll a,b,c,r;
        cin>>a>>b>>c>>r;

        if(a>b)
            swap(a,b);

        ll x=(c-r);
        ll y=(c+r);

        if(y<a || x>b){
                if((a>0 && b>0)|| (a<0 && b<0))
                     cout<<b-a<<"\n";
                else cout<<abs(a)+abs(b)<<"\n";
        }

        else
        {
            ll mx = max(a,x);
            ll mi = min(b,y);

            cout<<b-a-(mi-mx)<<"\n";
        }
    }
    return 0;
}
