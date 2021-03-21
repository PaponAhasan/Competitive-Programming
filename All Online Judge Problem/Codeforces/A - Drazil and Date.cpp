#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,s;
    cin>>a>>b>>s;

    ll ok=abs(a)+abs(b);

    if((ok<=s) && (ok%2==s%2))
        cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    return 0;

}
