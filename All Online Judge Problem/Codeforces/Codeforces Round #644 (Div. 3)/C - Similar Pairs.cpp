#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    int a,b,c;
    cin>>a;
    vector<int>v(a);
    for(auto &x:v) cin>>x;
    sort(&v[0],&v[a]);
    int odd = 0,even = 0;
    for(int i=0;i<v.size();i++){
       if(v[i]%2) odd++;
       else even++;
    }

    if(odd%2==0 and even%2==0){
        puts("YES");
        return;
    }
    
    int Y = 0;
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i] == 1) Y++;
    }
    if(Y) puts("YES");
    else puts("NO");
    
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
           Solve();
	}
    return 0; 
}
