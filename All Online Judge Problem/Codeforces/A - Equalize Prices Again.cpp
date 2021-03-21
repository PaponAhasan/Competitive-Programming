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
        int q,sum=0,ans;
        cin>>q;
        long long a[100];
        for(int i=0;i<q;i++){
            cin>>a[i];
            sum=sum+a[i];
        }

        ans=ceil((double)sum/q);
        cout<<ans<<endl;
    }
    return 0;
}
