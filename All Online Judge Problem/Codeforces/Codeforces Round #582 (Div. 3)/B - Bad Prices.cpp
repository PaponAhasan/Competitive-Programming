#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];

        int s=ar[n-1];
        int ok=0;
        for(int i=n-2;i>=0;i--){
            if(s<ar[i]) ok++;
            else s=ar[i];
        }
        cout<<ok<<"\n";
    }
    return 0;
}
