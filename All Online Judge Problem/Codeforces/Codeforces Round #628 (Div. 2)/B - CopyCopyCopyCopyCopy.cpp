#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
    vector<long long> v(n);
    set<LL>s;
    for(auto &x:v){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<"\n";
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

-------------------------------

#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    cout<<mp.size()<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc-->0) {
	    solve();
	}
    return 0; 
}

-----------------------------

#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
    long long x=n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(&a[0],&a[n]);
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]) --x;
    }
    cout<<x<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc-->0) {
	    solve();
	}
    return 0; 
}