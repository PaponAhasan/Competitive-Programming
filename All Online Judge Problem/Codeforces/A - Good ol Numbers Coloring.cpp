#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;

        if(gcd(a,b)==1){
            cout<<"Finite\n";
        }
        else cout<<"Infinite\n";
    }
    return 0;
}
