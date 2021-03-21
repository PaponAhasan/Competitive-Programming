#include<bits/stdc++.h> 
using namespace std; 

int main() 
{
	//freopen("in.txt","r",stdin);
    int n,k;
    while(cin>>n>>k){
    	int Ans = n;
    	while(n>=k){
    		Ans+= n/k;
    		n = (n/k) + (n%k);
		}
		cout<<Ans<<"\n";
	}
} 