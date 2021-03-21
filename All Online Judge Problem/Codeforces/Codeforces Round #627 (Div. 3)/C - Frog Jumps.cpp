#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
void solve() {
    
    // jibon ta bedona..
    
    string s;
    cin>>s;
    int ok=0,mx=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L') ok++;
        else{
            mx=max(mx,ok);
            ok=0;
        }
    }
    mx=max(mx,ok);
    cout<<mx+1<<"\n";
    
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