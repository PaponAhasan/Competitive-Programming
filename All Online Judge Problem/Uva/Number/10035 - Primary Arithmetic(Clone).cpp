// C++ program to find sum of two large numbers.
#include<bits/stdc++.h>
using namespace std;

void findSum(long long s1, long long s2)
{
   if(s1>s2) swap(s1,s2);


    long long carry=0,cry=0;
    while(s2!=0){
       long long r1= s1%10;
       s1=s1/10;
       long long r2= s2%10;
       s2=s2/10;

       long long s=r1+r2+carry;
       if(s>9){
           cry++;
           carry=s/10;
       }
       else carry=0;
    }
     if(cry==0) cout<<"No carry operation."<<"\n";
     else if(cry==1) cout<<cry<<" carry operation."<<"\n";
     else cout<<cry<<" carry operations."<<"\n";
}

// Driver code
int main()
{
	long long a,b;
	 while(cin>>a>>b){
	     if(a==0 && b==0) break;
	     findSum(a, b);
      }
	return 0;
}

