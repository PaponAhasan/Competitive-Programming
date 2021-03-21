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
    while(t--){
        long long n,ans;
        cin>>n;

        if(n==2){
             ans=n%2;
        }
        else ans=ceil((double)n/2);
        //cout<<ans<<endl;
        cout<<abs((ans*2)-n)<<endl;
    }
    return 0;
}
