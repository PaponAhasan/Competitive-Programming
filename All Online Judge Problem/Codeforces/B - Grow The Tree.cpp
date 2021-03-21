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
    ll n,sum1=0,sum2=0;
    cin>>n;

    ll A[n];
    for(ll i=0;i<n;i++){
        cin>>A[i];
        //sum=sum+A[i];
    }

    sort(A,A+n);

    for(ll i=0;i<n/2;i++){
        //cin>>A[i];
        sum1=sum1+A[i];
    }

    for(ll i=n/2;i<n;i++){
        //cin>>A[i];
        sum2=sum2+A[i];
    }

    cout<<(sum1*sum1)+(sum2*sum2)<<endl;

//      int minimum =A[0];
//
//    for (ll c = 0; c < n; c++)
//    {
//        if (A[c] <= minimum)
//        {
//            cnt++;
//           minimum = A[c];
//        }
//    }
//
//    ll l=(sum-(minimum*cnt))*(sum-(minimum*cnt));
//
//    ll m=(minimum*cnt)*(minimum*cnt);
//    cout<<m+l<<endl;



return 0;

}
