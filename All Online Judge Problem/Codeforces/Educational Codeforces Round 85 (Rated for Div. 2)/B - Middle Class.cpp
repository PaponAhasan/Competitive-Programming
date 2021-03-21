#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n,k;
    cin >> n>>k;
    vector<long long> vc(n);
    for(int i = 0; i < n; i++) {
        cin >> vc[i];
     }
     
     sort(vc.begin(),vc.end());
     reverse(vc.begin(),vc.end());
 
    LL sz=vc.size();
    while(true){
        LL sum=0LL;
        for(LL i=0;i<sz;i++){
            sum+=vc[i];
        }
        if((double)sum/sz>=k){
            cout<<sz<<"\n";
            break;
        }
        else sz--;
        if(sz==0LL){
            puts("0");
            break;
        }
    }
     
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
    return 0; 
}