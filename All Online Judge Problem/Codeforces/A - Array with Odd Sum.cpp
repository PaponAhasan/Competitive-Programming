#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        ll a,x;
        cin>>a;

        int even,odd;
        even=odd=0;
        for(int i=0;i<a;i++){
            cin>>x;
            if(x%2) odd++;
            else even++;
        }

         if(odd%2)  cout<<"YES"<<"\n";
         else if(odd>0 && even>0 ) cout<<"YES"<<"\n";
         else cout<<"NO"<<"\n";
    }
    return 0;
}
