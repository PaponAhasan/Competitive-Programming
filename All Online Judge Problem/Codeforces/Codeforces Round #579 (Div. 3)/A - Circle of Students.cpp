#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int mi=201;
    int mx=0;
    for(auto &x:v){
        cin>>x;
        mi=min(mi,x);
        mx=max(mx,x);
    }
    int x;
    for(int i=0;i<n;i++){
        if(mi==v[i]){
            x=i;
            break;
        }
    }
    int y;
    for(int i=0;i<n;i++){
        if(v[i]==mx){
            y=i;
            break;
        }
    }
    
    if(n==1){
       cout<<"YES"<<"\n";
       return; 
    }
    
    vector<int>vc;
    
    if(x<y){
        if(abs(x-y)<2){
            for(int i=x;i>=0;i--){
                vc.push_back(v[i]);
            }
            for(int i=n-1;i>=x+1;i--){
                vc.push_back(v[i]);
            }
        }
        else{
            for(int i=0;i<n;i++){
                vc.push_back(v[i]);
            }
        }
    }
    
    else{
        if(abs(x-y)<2){
            for(int i=x;i<n;i++){
                vc.push_back(v[i]);
            }
            for(int i=0;i<=x+1;i++){
                vc.push_back(v[i]);
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                vc.push_back(v[i]);
            }
        }
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]!=vc[i]){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}