#include "bits/stdc++.h"
using namespace std;

int main()
{
         int n;
         cin >> n;
         int a[n],b[n];
         int x=0,y=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]==1){
               x++;
           }
       }
        for(int i=0;i<n;i++){
           cin>>b[i];
           if(b[i]==1) {
               y++;
           }
       }
           int ok=0;
           for(int i=0;i<n;i++){
            if((a[i]==1 and b[i]==1)){
                    ok++;
                }
            }
       if(x>y){
           cout<<"1"<<"\n";
           return 0;
       }
       if(x==0 or ok==x){
           cout<<"-1"<<"\n";
           return 0;
       }
        if(x<=y){
             ok=0;
             for(int i=0;i<n;i++){
                if((a[i]==1 and b[i]==0)){
                    ok++;
                }
            }
            int s=y-x;
            cout<<1+(s/ok)+1<<"\n";
        }
    return 0;
}
