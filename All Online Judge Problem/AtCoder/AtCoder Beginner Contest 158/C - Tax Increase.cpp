#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int a,b;
   cin>>a>>b;
   int c=floor(double(a)/0.08);
   int d=floor(double(b)/0.1);
   
   int i=ceill(double(a)/0.08);
   int j=ceill(double(b)/0.1);
   
   int m=max(i,j);
   int mx=max(c,d);
   
   int x=m*0.08;
   int y=m*0.1;
   
   int f=mx*0.08;
   int k=mx*0.1;
   //cout<<f<<" "<<k<<"\n";
   int n=0;
   if(x==a and y==b){n=1;}
   int l=0;
   if(f==a and k==b){l=1;}
   if(n and l) cout<<min(m,mx);
   else if(n) cout<<m<<"\n";
   else if(l)  cout<<mx<<"\n";
   else cout<<"-1"<<"\n";
}
