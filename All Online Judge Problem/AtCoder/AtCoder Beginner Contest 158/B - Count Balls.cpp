#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   long long a,b,c;
   cin>>a>>b>>c;
  
   long long s=c+b;
   long long ans=a/s;
   long long r=a%s;
   
   cout<<(b*ans)+min(r,b)<<"\n";
}
