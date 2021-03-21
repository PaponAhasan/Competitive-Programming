#include<bits/stdc++.h>
using namespace std;

set<string>st;
void solve(string p,string q)
{
    sort(p.begin(),p.end());
    st.clear();
   for(int i=0;i<q.size();i++){
       for(int j=1;j<=q.size()-i;j++){
           string s=q.substr(i,j);
           sort(s.begin(),s.end());
           st.insert(s);
       }
   }
   if(st.find(p)!=st.end()){
       cout<<"YES"<<"\n";
   }
   else cout<<"NO"<<"\n";
}

int main()
{
    int tc;
    cin>>tc;
    while(tc-- > 0){
    string str;
    cin>>str;
    string s;
    cin>>s;
    solve(str,s);
    }
    return 0;
}
