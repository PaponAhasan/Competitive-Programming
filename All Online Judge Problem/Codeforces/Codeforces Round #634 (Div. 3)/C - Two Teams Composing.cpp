#include "bits/stdc++.h"
using namespace std;
#define LL long long

void join() {
    int n,a,b;
    cin>>n;
    vector<int>v(n) ;
    set<int>s;
    map<int,int>mp;
    int mx=0,mi=1e8;
    for(auto &x:v){
        cin>>x;
        mp[x]++;
        s.insert(x);
    }
    if(n==1){
        puts("0");
        return;
    }
    
    for(auto it=mp.begin();it!=mp.end();it++){
        mx=max(it->second,mx);
    }
    
   cout<<max(min((int)s.size(),mx-1),min((int)s.size()-1,mx))<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--) {
        join();
	}
    return 0;
}