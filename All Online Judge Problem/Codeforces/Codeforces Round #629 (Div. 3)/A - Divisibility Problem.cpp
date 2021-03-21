#include "bits/stdc++.h"
using namespace std;
#define LL long long
int n, k;
 
void solve() {
    LL a,b;
    cin>>a>>b;
    if(a%b==0){
        cout<<"0"<<"\n";
        return;
    }
    cout<<b-(a/b)<<"\n";
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