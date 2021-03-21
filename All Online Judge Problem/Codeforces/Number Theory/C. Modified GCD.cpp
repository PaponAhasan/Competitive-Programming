#include <bits/stdc++.h> 
using namespace std;
#define LL long long
#define MaxN 100000

int Div[MaxN];
int sz;

void Divisors(int n){
    sz=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            Div[sz++]=i;
            if(i*i!=n) Div[sz++]=n/i;
        }
    }
}

void solve() 
{ 
    LL n,m;
    cin>>n>>m;
    LL g=__gcd(n,m);
    Divisors(g);
    LL tc;
    cin>>tc;
    while(tc--){
        LL a,b;
        cin>>a>>b;
        int Ans=-1;
        for(LL i=0;i<sz;i++){
            if(Div[i]>=a and Div[i]<=b){
                Ans=max(Ans,Div[i]);
            }
        }
        cout<<Ans<<"\n";
    }
} 

int main() 
{ 
	solve();
	return 0; 
} 