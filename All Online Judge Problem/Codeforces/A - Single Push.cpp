/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,cnt=1,temp,coun=0,equa=1,first,last;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

         for(int i=0;i<n;i++){
            cin>>b[i];
        }

           for (int i=0;i<n;i++) {

                if (a[i] != b[i]) {

                        equa=0;
                        break;
                }
        }

        if(equa) cout<<"YES"<<"\n";

        else {
        for(int i=0;i<n;i++){
            if (a[i] != b[i]){
                 temp=b[i]-a[i];
                 first=i;
                break;
            }
        }

        if(temp>0){

          for(int i=0;i<n;i++){
            if (a[i] != b[i]){
                last=i;
            }
        }

        ///cout<<first<<" "<<last<<endl;

          for(int i=first;i<=last;i++){
            a[i]=a[i]+temp;
        }

        for (int i=0;i<n;i++) {

                if (a[i] != b[i]) {

                        cnt=0;
                }
        }

        if(cnt) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }

    }
}
