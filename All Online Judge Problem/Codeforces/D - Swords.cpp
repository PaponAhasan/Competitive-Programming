#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    long long mx=*max_element(ar,ar+n);

    long long g;
      for(int i=0;i<n;i++){
          ar[i]=mx-ar[i];
          if(ar[i]!=0)
           g=ar[i];
    }

    long long sum=0LL;
      for(int i=0;i<n;i++){

        sum+=ar[i];
        if(ar[i]!=0)
           g=__gcd(g,ar[i]);
    }

    cout<<sum/g<<" "<<g<<"\n";


    return 0;
}
