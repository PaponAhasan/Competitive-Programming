#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        int ar[3],ans;
        cin>>ar[0]>>ar[1]>>ar[2];

        sort(ar,ar+sizeof(ar)/sizeof(0));

        ans=(ar[0]+ar[1]+ar[2])/2;

        if(ar[0]+ar[1]<ar[2])
            ans=ar[0]+ar[1];

            cout<<ans<<"\n";
    }
    return 0;
}
