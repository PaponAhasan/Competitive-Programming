#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        ll a;
        cin>>a;
        vector<ll>v(a+a);
        for(auto &x:v){
            cin>>x;
        }
        sort(v.begin(),v.end());
        cout<<abs(v[a]-v[a-1])<<"\n";
    }
    return 0;
}

