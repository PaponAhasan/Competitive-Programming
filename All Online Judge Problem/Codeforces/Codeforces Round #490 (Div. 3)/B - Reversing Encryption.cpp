#include "bits/stdc++.h"
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v,vc;
    for(int i=0;i<n;i++){
        vc.push_back(s[i]);
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    //for(auto x:v) cout<<x;
   // return 0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i];j++){
            reverse(s.begin(),s.begin()+v[i]);
            break;
        }
    }
    cout<<s;
}