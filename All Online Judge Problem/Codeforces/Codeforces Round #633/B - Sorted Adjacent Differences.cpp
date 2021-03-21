#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n;
    cin>>n;
    vector<int>v(n),Ans;
    for(auto &x:v)cin>>x;
    sort(v.begin(),v.end());
    for(int i=0;i<n/2;i++){
        Ans.push_back(v[n-i-1]);
        Ans.push_back(v[i]);
    }
    if(n&1) Ans.push_back(v[n/2]);
    reverse(Ans.begin(),Ans.end());
    for(auto x:Ans)cout<<x<<" ";
    cout<<"\n";
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