#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,m,a,s=0,c=0,i;
        cin>>n>>m;

        for(int i=0;i<n;i++){
            cin>>a;
            s=s+a;
        }
        if(n<=2 || n>m) cout<<"-1"<<"\n";

        else {
            cout<<s*2<<"\n";

            for( i=1;i<m;i++){
                cout<<i<<" "<<i+1<<"\n";
                c=1;
            }
            if(c)
            cout<<i<<" "<<i-(i-1)<<"\n";
        }
    }
    return 0;
}

