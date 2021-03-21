#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    int a,b,c;
    cin>>a;
    vector<int>v(a);
    for(auto &x:v) cin>>x;
    sort(&v[0],&v[a]);
    int mn = 1005;
    for(int i=0;i<v.size()-1;i++){
        mn = min(mn,v[i+1]-v[i]);
    }
    cout<<mn<<"\n";
    
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
           Solve();
	}
    return 0; 
}
