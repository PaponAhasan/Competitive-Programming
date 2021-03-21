/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n,m,a,b,cnt1=0,cnt2=0,cnt3=0,cnt4=0,l1,l11,l2,l22;
        cin>>n;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0)
                cnt1++;
            else
                cnt2++;
        }

        cin>>m;
        for(ll i=0; i<m; i++)
        {
            cin>>b;
            if(b%2==0)
                cnt3++;
            else
                cnt4++;
        }

        ///if(cnt1==0 || cnt3==0){ cnt1=0;cnt3=0;}
        /// if(cnt2==0 || cnt4==0){ cnt2=0;cnt4=0;}

        /// cout<<cnt1+cnt2+cnt3+cnt4<<endl;

        l1=max(cnt1,cnt3);
        l11=min(cnt1,cnt3);
        l2=max(cnt2,cnt4);
        l22=min(cnt2,cnt4);


        cout<<(l1*l11)+(l2*l22)<<endl;
    }
    return 0;
}
