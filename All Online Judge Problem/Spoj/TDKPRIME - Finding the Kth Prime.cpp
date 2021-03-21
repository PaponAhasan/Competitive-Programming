#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MaxN 90000000
bool IsPrime[MaxN+5];
LL Prime[MaxN+5];
LL sz=0;

void Seive(){
   for(LL i=0;i<=MaxN;i++) IsPrime[i]=true;
   IsPrime[0]=IsPrime[1]=false;
   for(LL i=2;i*i<=MaxN;i++){
       if(IsPrime[i]==true){
           for(int j=i+i;j<=MaxN;j+=i){
               IsPrime[j]=false;
           }
       }
   }
}

void GeneratePrime(){
    Seive();
    for(int i=1;i<=MaxN;i++){
        if(IsPrime[i]){
            Prime[sz++]=i;
        }
    }
}

int main() {
	GeneratePrime();
	int Tc;cin>>Tc;
	while(Tc--){
	   LL x;
	   cin>>x;
	   cout<<Prime[x-1]<<"\n"; 
	}
	return 0;
}