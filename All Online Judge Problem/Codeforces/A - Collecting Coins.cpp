#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int ar[3];
        for(int i=0;i<3;i++){
            cin>>ar[i];
        }

        int x;
       cin>>x;

       sort(&ar[0],&ar[3]);

       int sum;
       sum=ar[2]-ar[0];
       sum+=(ar[2]-ar[1]);

       if(sum>x) cout<<"NO"<<"\n";
       else {
           x-=sum;
           if(x%3) cout<<"NO"<<"\n";
           else cout<<"YES"<<"\n";
       }
    }
    return 0;
}
