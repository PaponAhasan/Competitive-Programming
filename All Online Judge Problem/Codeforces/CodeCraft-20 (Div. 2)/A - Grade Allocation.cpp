
#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int s=0;
        for(auto &x:v){
            cin>>x;
            s+=x;
        }
        cout<<min(s,k)<<"\n";
        
    }
    return 0;
}