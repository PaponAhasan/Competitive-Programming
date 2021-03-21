#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    vector<int>v(a);
    for(auto &x:v) {
        cin>>x;
    }
    set<int>s;
    int c[a]={0};
    for(int i=a-1;i>=0;i--){
        s.insert(v[i]);
        c[i]=s.size();
    }
     vector<int>vc(b);
    for(auto &x:vc) {
        cin>>x;
        --x;
        cout<<c[x]<<"\n";
    }
  return 0;
}
