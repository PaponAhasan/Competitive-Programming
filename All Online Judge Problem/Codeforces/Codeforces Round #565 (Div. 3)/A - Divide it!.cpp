#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n;
        cin>>n;
        int ok=0;
        while(true){
            if(n==1){
                ok++;
                break;
            }
            if(n%2==0){
                n=n/2;
                ok++;
            }
            else if(n%3==0){
                n=(2*n)/3;
                ok++;
            }
            else if(n%5==0){
                n=(4*n)/5;
                ok++;
            }
            else {
                ok=0;
                break;
            }
        }
        if(ok)
        cout<<ok-1<<"\n";
        else cout<<"-1"<<"\n";
    }
    return 0;
}