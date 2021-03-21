#include "bits/stdc++.h"
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x:v){
            cin>>x;
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n;i+=2){
            sum+=abs(v[i]-v[i+1]);
        }
        cout<<sum<<"\n";
    return 0;
}
