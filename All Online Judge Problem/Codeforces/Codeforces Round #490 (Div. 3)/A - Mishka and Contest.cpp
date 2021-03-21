#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    int Ans=0;
    for(int i=0;i<n;i++){
        if(v[i]<=k) Ans++;
        else break;
    }
    if(Ans==n) goto OK; 
    for(int j=n-1;j<n;j--){
       if(v[j]<=k) Ans++;
        else break;
    }
    OK:
    cout<<Ans<<"\n";
    return 0;
}