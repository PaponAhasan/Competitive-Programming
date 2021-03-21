#include "bits/stdc++.h"
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        int s=n/k;
        int r=n%k;
        for(int i=0;i<s;i++){
            for(int j=0;j<k;j++)
               printf("%c",97+j);
        }
        for(int i=0;i<r;i++){
               printf("%c",97+i);
        }
        cout<<"\n";
    }
    return 0;
}
