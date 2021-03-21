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
        ll A[a];

        int s=0;
        int zero=0;
        for(ll i=0;i<a;i++){
            int x;
            cin>>x;
            s+=x;
            if(x==0){
                zero++;
            }
        }
        s+=zero;
        if(s>0 || s<0) cout<<zero<<"\n";
        else cout<<zero+1<<"\n";
    }
    return 0;
}
