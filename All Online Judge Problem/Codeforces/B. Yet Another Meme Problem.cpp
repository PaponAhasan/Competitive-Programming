#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        ll a,b;
        cin>>a>>b;
        ll allnine=0LL;
        for(int i=9;i<=b;i=(i*10)+9){
            ++allnine;
        }
        cout<<a*allnine<<"\n";
    }
    return 0;
}
