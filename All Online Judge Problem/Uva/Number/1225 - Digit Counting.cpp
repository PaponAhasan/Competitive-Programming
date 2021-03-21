#include "bits/stdc++.h"
using namespace std;
#define LL long long
int main()
{
    int tc,Case=1;
    scanf("%d", &tc);
    while(tc--){
        int count[10];
        memset(count,0,sizeof(count));
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            int j=i,r;
            while(j!=0){
                r=j%10;
                j/=10;
                count[r]++;
            }
        }
        for(int i=0; i<=9; i++){
            cout<<count[i];
            (i==9) ? cout<< "\n" : cout<<" ";
        }
    }
    return 0;
}
