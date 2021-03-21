#include<bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    long long N;
	 while(scanf("%lld",&N)==1){
	     long long n=(N+1)/2;
	     long long l=((n*n)*2)-1;
	     cout<<l+(l-2)+(l-4)<<"\n";
      }
	return 0;
}

