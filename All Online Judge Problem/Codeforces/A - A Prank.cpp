#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int ok=0,mx=0,first,last=0,temp,Tm;
    for(int i=0;i<n-1;i++){
         Tm=ar[i];
          first=i;
        for(int j=i+1;j<n;j++){
            temp=ar[j];
            if(temp-Tm<=1){
                ++ok;
                Tm=temp;
                last=j;
            }
            else break;
        }
        //cout<<ar[first]<<" "<<ar[last]<<" "<<ok<<"\n";
        if(ar[first]==1 || ar[last]==1e3)
          ok=ok;
          else ok-=1;
        mx=max(mx,ok);
        ok=0;
    }
      cout<<mx<<"\n";
    return 0;
}
