#include "bits/stdc++.h"
using namespace std;
#define LL long long
int Case = 0;
 
void solve() {
    int n,q;
    scanf("%d%d",&n,&q);
    vector<int>a;
    for(int i = 0; i < n; i++) {
        int g;
         scanf("%d",&g);
        a.push_back(g);
     }
     
    cout<<"Case "<<++Case<<":"<<"\n";
    while(q--) {
        int x,y;
        scanf("%d%d",&x,&y);
        x = (int)(lower_bound(a.begin(),a.end(),x)-a.begin());
        y = (int)(upper_bound(a.begin() + x,a.end(),y)-a.begin());
        printf("%d\n",y-x);
     }
}
 
 
int main()
{
    int tc; scanf("%d", &tc);
    while(tc--) {
         solve();
    }
    return 0;
}