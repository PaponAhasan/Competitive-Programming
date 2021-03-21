#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    set<int>s;
    
    s.insert(a);
    s.insert(b);
    s.insert(c);
    
    if(s.size()==2) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    
    return 0;
}
