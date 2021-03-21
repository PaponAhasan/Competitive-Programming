#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n;
    cin >> n;
    
    if(n&1)cout<<n-1<<" "<<"1"<<"\n";
    else cout<<n/2<<" "<<n/2<<"\n";
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