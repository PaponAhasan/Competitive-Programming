#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    vector<long long>v(n),vc;
    for(auto &x:v){
        cin>>x;
    }
    
    long long g=v[0];
    for(long long i=1;i<n;i++){
        g=__gcd(g,v[i]);
    }
    
    int c=0;
    for(long long i=1;i*i<=g;i++){
       if(g%i==0) c+=2;
	   if(i*i==g) c--;
      }
      cout<<c<<"\n";
      
    return 0;
}