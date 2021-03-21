#include "bits/stdc++.h"
using namespace std;
#define LL long long

vector<LL>a;
void printDivisors(LL n) 
{ 
	for (LL i=1; i<=sqrt(n); i++){ 
		if (n%i == 0LL){ 
			if (n/i == i) a.push_back(i);
			else{
			    a.push_back(i);
			    a.push_back(n/i);
			} 
		} 
	} 
} 

void Solve(){
    LL n,k;
    cin>>n>>k;
    if(n<=k){
      puts("1");
      return;
    }
    printDivisors(n);
    sort(a.begin(),a.end(),greater<LL>());
    for(LL i=0;i<a.size();i++){
        if(n%a[i]==0 and a[i]<=k ){
            cout<<n/a[i]<<"\n";
            break;
        }
    }
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
           Solve();
	}
    return 0; 
}
