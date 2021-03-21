#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long a,b,k;
        cin>>a>>b>>k;
        
        if(k&1){
            cout<<((a*(k/2))+a)-(b*(k/2))<<"\n";
        }
        else {
            cout<<(a*(k/2))-(b*(k/2))<<"\n";
        }
    }
    return 0;
}