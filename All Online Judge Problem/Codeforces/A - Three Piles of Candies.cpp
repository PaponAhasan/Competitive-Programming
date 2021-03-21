#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--){
        ll ar[3];
        for(int i=0;i<3;i++)
            cin>>ar[i];
        sort(&ar[0],&ar[3]);
        ar[0]=ar[1]-ar[0];
        ar[2]=ar[2]-ar[0];
        cout<<ar[2]/2+ar[1]<<"\n";
    }
    return 0;
}
