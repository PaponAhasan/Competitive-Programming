#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
     if(n&1)cout<<n/2<<"\n";
     else cout<<(n/2)-1<<"\n";
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