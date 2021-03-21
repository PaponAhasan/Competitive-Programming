#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    vector<int>v(a);
    int s=0;
    for(auto &x:v) {
        cin>>x;
        s+=x;
    }
    sort(v.begin(),v.end());

    int c;
    cin>>c;
    if(c>a){
        cout<<s-((c-a)*b);
        return 0;
    }
    else if(c<a){
         s=0;
         for(int i=0;i<c;i++) s+=v[i];
         cout<<s<<"\n";
         return 0;
    }
    cout<<s<<"\n";
}
