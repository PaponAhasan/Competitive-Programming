#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve(){
	 int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	 int sz = sizeof(a)/sizeof(a[0]);
	 
	 int MaxSum = 0,Ans = INT_MIN;
	 
	 for(int i=0;i<sz;i++){
	 	MaxSum+=a[i];
	 	if(MaxSum>Ans) Ans = MaxSum;
	 	if(MaxSum<0) MaxSum = 0;
	 }
	 cout<<Ans<<"\n";
}
   
int main()
{
	solve();
	return 0;
}