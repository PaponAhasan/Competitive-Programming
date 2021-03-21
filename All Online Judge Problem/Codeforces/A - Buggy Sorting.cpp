#include "bits/stdc++.h"
using namespace std;
#define LL long long
int main()
{
    LL a;
    cin>>a;
    if(a<=2) cout<<"-1";
    else{ for(int i=a;i>=1;i--)
      cout<<i<<" ";
    }
    return 0;
}
