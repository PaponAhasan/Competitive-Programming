#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
        long long ar[4];
        for(int i=0;i<4;i++){
            cin>>ar[i];
        }
       sort(&ar[0],&ar[3]);
       long long sum;
       sum=ar[2]-ar[0];
       sum+=(ar[2]-ar[1]);
       if(sum>ar[3]) cout<<"NO"<<"\n";
       else {
           ar[3]-=sum;
           if(ar[3]%3) cout<<"NO"<<"\n";
           else cout<<"YES"<<"\n";
       }
    }
    return 0;
}