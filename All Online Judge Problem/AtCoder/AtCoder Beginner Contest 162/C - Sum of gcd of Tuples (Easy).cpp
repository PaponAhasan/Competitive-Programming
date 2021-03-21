#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int g1=__gcd(i,j);
            for(int k=1;k<=n;k++){
                sum+=__gcd(g1,k);
            }
        }
    }
    cout<<sum<<"\n";
	return 0; 
} 
