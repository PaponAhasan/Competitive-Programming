#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l>>r;

     int sum=1,ok=1,h=1;
    for(int i=1;i<l;i++){
        sum+=pow(2,i);
        ok++;
    }

    if(ok==l && ok==n) cout<<sum<<" ";
    else if(ok==l && ok<n){
        sum+=1*(n-ok);
        cout<<sum<<" ";
    }

      h=sum=ok=1;
    for(int i=1;i<r;i++){
        sum+=pow(2,i);
        ok++;
        h=pow(2,i);
    }

    if(ok==r && ok==n) cout<<sum<<"\n";
    else if(ok==r && ok<n){
        sum+=h*(n-ok);
        cout<<sum<<"\n";
     }

    return 0;
}
