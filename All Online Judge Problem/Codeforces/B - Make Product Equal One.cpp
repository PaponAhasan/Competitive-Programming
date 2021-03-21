#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
	long long a;
	cin>>a;

	long long k=0LL,c=0LL,z=0LL;
	for(int i=0;i<a;i++){
	    long long x;
	    cin>>x;
	    if(x==1) continue;
	    else if(x>0){
	        k+=x-1;
	    }
	    else {
	        k+=abs(x+1);
	        if(x<0)
	        c++;
	        else
	          z++;
	    }
	}

	 if(c%2 && !z) cout<<k+2<<"\n";
	 else cout<<k<<"\n";
	 return 0;
}
