#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    int n;
    cin>>n;
    double Ans = 0;
    for(int i=0;i<n;i++){
         double x,y,z;
        cin>>x>>y>>z;
        Ans+=((x/y)*z)*y;
    }
    cout<<Ans<<"\n";
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
           Solve();
	}
    return 0; 
}