#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int ar[4*n];
        int N=n*4;
        
        for(int i=0;i<N;i++){
            cin>>ar[i];
        }
        
        sort(&ar[0],&ar[N]);
        int area=ar[0]*ar[N-1];
        bool T=true;
        
        for(int i=0;i<n;i++){
            int x = i * 2, y = 4 * n - (i * 2) - 1;
            if(ar[x]!=ar[x+1] || ar[y]!=ar[y-1] || ar[x]*ar[y]!=area){ 
               T=false;
            }
        }
        
        if(T) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}