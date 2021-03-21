#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    int n;
    cin >> n;
    if((n/2)%2){
        puts("NO");
        return;
    }
    puts("YES");
    int x=n/2;
    int even=0,e=0;
    for(int i=2;true;i+=2){
        if(e==x)break;
        cout<<i<<" ";
        even+=i;
        e++;
    }
    int odd=0,o=0;
    for(int i=1;true;i+=2){
        if(o==x-1)break;
        cout<<i<<" ";
        odd+=i;
        o++;
    }

    cout<<even-odd<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--) {
        solve();
	}
    return 0; 
}