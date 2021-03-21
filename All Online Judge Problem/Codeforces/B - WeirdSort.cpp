#include "bits/stdc++.h"
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin >> n>>m;
        int a[n],b[m];
        for(int i = 1; i <=n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <=m; i++){
            cin >> b[i];
        }

        bool ok=true;
        for(int i=1; i<n; i++){
            if(a[i]>a[i+1]){
                ok=false;
                break;
            }
        }

        if(ok){
            cout<<"YES"<<"\n";
            continue;
        }

        for(int j=1; j<=m; j++){
            for(int k=1; k<=m; k++){
                if(a[b[k]]>a[b[k]+1])
                swap(a[b[k]],a[b[k]+1]);
            }
        }

         ok=true;
        for(int i=1; i<n; i++){
            if(a[i]>a[i+1]){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
