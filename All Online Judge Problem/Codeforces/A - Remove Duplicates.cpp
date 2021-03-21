#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    list<int>l;
    vector<int>v ;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
       v.push_back(x);
       s.insert(x);
    }

    reverse(v.begin(),v.end());

   for(int i=0;i<v.size();i++){
        if(s.find(v[i])!=s.end())
          l.push_front(v[i]);
          s.erase (v[i]);
   }

    cout<<l.size()<<"\n";
    for(auto p:l)
      cout<<p<<" ";

    cout<<"\n";
    return 0;
}
