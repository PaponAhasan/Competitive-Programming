#include<bits/stdc++.h>
using namespace std;

int tc;
int ar[3];

void solve()
{
    sort(&ar[0],&ar[3]);

    cout<<((ar[2]-ar[0]>ar[1]+1) ? "No" : "Yes")<<"\n";
}

int main()
{
    cin>>tc;
    while(tc--)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        solve();
    }
    return 0;
}
