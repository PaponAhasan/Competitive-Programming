#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n;
    cin >> n;
    int mx=0,Ans;
    for(int i = 0; i < n; i++) {
        int x;
	    cin >>x;
	    Ans=mx+x;
	    mx=max(mx,Ans);
	    cout<<Ans<<" ";
    }
    cout<<"\n";
}

int main()
{
    solve();
    return 0; 
}