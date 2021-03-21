#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0)
             cout<<(y-x)/(a+b);
        else cout<<"-1"<<"\n";
    }
    return 0;
}
