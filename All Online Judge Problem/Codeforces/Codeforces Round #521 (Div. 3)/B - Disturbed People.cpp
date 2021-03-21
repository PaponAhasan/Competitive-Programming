#include "bits/stdc++.h"
using namespace std;
 
int main()
{
        long long n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ok=0;
        for(int i=0;i<n;i++){
            if(a[i-1]==a[i+1] and a[i-1]==1 and a[i]==0){
                ok++;
                i+=2;
            }
        }
        cout<<ok<<"\n";
 
    return 0;
}