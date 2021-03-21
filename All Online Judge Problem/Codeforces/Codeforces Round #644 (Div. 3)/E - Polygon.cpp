#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    int n;
    cin>>n;
    char Matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>Matrix[i][j];
        }
    }
    
    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=n-1 and j!=n-1 and  Matrix[i][j]=='1' and Matrix[i+1][j]=='0' and Matrix[i][j+1]=='0'){
                flag = false;
                break;
            }
        }if(!flag) break;
    }
    if(flag) puts("YES");
    else puts("NO");
}

int main()
{
    int tc; scanf("%d", &tc);
	while(tc--) {
	    Solve();
	}
    return 0; 
}
