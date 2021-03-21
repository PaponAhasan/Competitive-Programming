#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long>v;
    long long h,n;
    cin>>h>>n;
    
    long long s=0LL;
    for(long long i=0;i<h;i++){
        long long x;
        cin>>x;
        v.push_back(x);
       // s+=x;
    }
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    for(long long i=n;i<v.size();i++){
        s+=v[i];
    }
    //if(s>=h) cout<<"Yes"<<"\n";
    //else cout<<"No"<<"\n";
    
    cout<<s<<"\n";
    return 0;
}
