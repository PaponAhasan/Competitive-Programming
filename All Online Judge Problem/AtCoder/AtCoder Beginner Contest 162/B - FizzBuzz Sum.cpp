#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    long long n;
    cin>>n;
    long long sum=0LL;
    for(long long i=1;i<=n;i++){
        if(i%3==0LL or i%5==0LL) continue;
          sum+=i;
    }
    cout<<sum<<"\n";
	return 0; 
} 
