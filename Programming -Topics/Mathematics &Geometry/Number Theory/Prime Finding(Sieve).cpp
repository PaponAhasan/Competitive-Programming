#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MaxN 1000000
bool IsPrime[MaxN+5];

void Seive(){
   //memset(IsPrime,true,sizeof(IsPrime));
   for(LL i=0;i<=MaxN;i++) IsPrime[i]=true;
   IsPrime[0]=IsPrime[1]=false;
   for(LL i=2;i<=MaxN;i++){
       if(IsPrime[i]==true){
           for(int j=i+i;j<=MaxN;j+=i){
               IsPrime[j]=false;
           }
       }
   }
}

int main() {
	//int n;
	//cin>>n;
	Seive();
	
	for(LL i=2;i<=MaxN;i++){
	    if(IsPrime[i]){
	        cout<<i<<" ";
	    }
	}
	return 0;
}


--------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define MaxN 100000
bool IsPrime[MaxN+5];
int Prime[MaxN+5];
int sz=0;

void Seive(){
   //memset(IsPrime,true,sizeof(IsPrime));
   for(LL i=0;i<=MaxN;i++) IsPrime[i]=true;
   IsPrime[0]=IsPrime[1]=false;
   for(LL i=2;i<=MaxN;i++){
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
	//int n;
	//cin>>n;
	GeneratePrime();
	
	for(LL i=0;i<sz;i++){
	    cout<<Prime[i]<<"\n";
	}
	return 0;
}