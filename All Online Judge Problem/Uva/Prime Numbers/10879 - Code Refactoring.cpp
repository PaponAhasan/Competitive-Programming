#include "bits/stdc++.h"
using namespace std;
#define LL long long
const LL MXN = 100005;
LL tem[MXN];
LL Case = 0;
void solve() {
	LL n;
	cin>>n;
	vector<LL>fact;
	LL cnt = 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			fact.push_back(i);
			fact.push_back(n/i);
			cnt++;
		}
		if(cnt==2) break;
	}
	cout<<"Case #"<<++Case<<": "<<n<<" = "<<fact[0]<<" * "<<
	fact[1]<<" = "<<fact[2]<<" * "<<fact[3]<<"\n";
  
}

int main()
{
	//freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    LL tc; scanf("%lld", &tc);
	while(tc--) {
        solve();
	}
    return 0; 
}