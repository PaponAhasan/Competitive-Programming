#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((v[i]+v[j])%2){
                cout<<"NO"<<"\n";
                return;
            }
        }
    }
    cout<<"YES"<<"\n";
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