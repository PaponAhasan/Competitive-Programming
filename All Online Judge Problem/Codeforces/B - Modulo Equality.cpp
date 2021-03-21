#include<bits/stdc++.h>
using namespace std;

const int N=2001;
int n,m,ans;
int a[N];
int b[N];
//const int ans=1e9;
void solve(int t)
{
    int s[N];
    for(int i=0;i<n;i++){
        s[i]=(a[i]+t)%m;
    }
    sort(&s[0],&s[n]);

    int ok=1;
    for(int i=0;i<n;i++){
        if(s[i]!=b[i]){
            ok=0;
            break;
        }
    }

    if(ok) {
        ans=min(ans,t);
       }
}

int main()
{
    ans=1e9;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      for(int i=0;i<n;i++){
        cin>>b[i];
    }

    sort(&a[0],&a[n]);
    sort(&b[0],&b[n]);

     for(int i=0;i<n;i++){
        solve((b[0]-a[i]+m)% m);
    }
    cout<<ans<<"\n";

    return 0;
}
