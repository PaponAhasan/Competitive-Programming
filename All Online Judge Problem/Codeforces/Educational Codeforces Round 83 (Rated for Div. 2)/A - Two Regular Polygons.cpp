#include "bits/stdc++.h"
using namespace std;
#define LL long long
vector <int> vc;
 
int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--) {
        int a,b;
        cin>>a>>b;
        if(a%b==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
	}
    return 0; 
}
