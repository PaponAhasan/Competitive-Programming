#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
   long long n;
    cin>>n;

    if(n<15)cout<<"No"<<"\n";
    else{
        n=n%14;
        if(n>=1 && n<=6)
          cout<<"Yes"<<"\n";
          else cout<<"No"<<"\n";
       }
    }

	return 0;
}
