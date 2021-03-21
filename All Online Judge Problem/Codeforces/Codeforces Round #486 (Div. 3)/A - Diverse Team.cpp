#include "bits/stdc++.h"
using namespace std;
 
int main()
{
        long long n,k;
        cin>>n>>k;
        int a[n];
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()<k){
            cout<<"NO"<<"\n";
            return 0;
        }
        cout<<"YES"<<"\n";
        int ok=0;
        for(int i=0;i<n;i++){
            if(s.find(a[i])!=s.end()){
                cout<<i+1<<" ";
                s.erase(a[i]);
                ok++;
            }
            if(ok==k)break;
        }

    return 0;
}