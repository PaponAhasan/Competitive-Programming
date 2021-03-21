/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;

        int aa=ceil((double)a/c);
        int bb=ceil((double)b/d);

        if(aa+bb<=k)
        {
            cout<<aa<<" "<<bb<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
