#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v;
	int n,s[3];
	scanf("%d",&n);
	for(int i=0;i<3;i++)
	   scanf("%d",&s[i]);

	int rem,a,b,c;

    sort(&s[0],&s[3]);

    if(n%s[0]==0)
      v.push_back(n/s[0]); // ==0
    if(n%s[1]==0)
      v.push_back(n/s[1]);
    if(n%s[2]==0)
      v.push_back(n/s[2]);

    if(n==s[1]+s[2])
      v.push_back(2); //==n

    int f=0;
    for(int i=1;i<=n/s[1];i++){
        int as,an;
        as=s[1]*i;
        for(int j=1;j<=(n-as)/s[0];j++){
            an=s[0]*j;
            if(as+an==n){
                v.push_back(i+j);
            }
            if(as+an>n) {break; f=1; }
        }
        if(f) break;
    }

      f=0;
        for(int i=1;i<=n/s[2];i++){
            int as,an;
        as=s[2]*i;
        for(int j=1;j<=(n-as)/s[0];j++){
            an=s[0]*j;
            if(as+an==n){
                v.push_back(i+j);
                //f=1;
            }
            if(as+an>n) {break; f=1; }
        }
        if(f) break;
    }

    f=0;
    for(int k=1;k<=n/s[2];k++){
        int a,b,c;
        a=s[2]*k;
        for(int i=1;i<=(n-a)/s[1];i++){
        b=s[1]*i;
        for(int j=1;j<=(n-(a+b))/s[0];j++){
            c=s[0]*j;
            if(a+b+c==n){
                v.push_back(i+j+k);
                f=1;
            }
            if(a+b+c>n) {break; f=1; }
        }
        if(f) break;
    }
    if(f) break;
 }

    int mx=0;
    for(auto x:v)
       mx=max(mx,x);
       cout<<mx<<"\n";

	return 0;
}
