#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
int main()
{
  string s;
  cin>>s;
  set<string>st;
  for(int i=0;i<s.size();i+=2){
      string ss=s.substr(i,2);
      st.insert(ss);
  }
  
  string f;
  for(auto x:st) f=x;
  if(st.size()==1 and f=="hi") cout<<"Yes"<<"\n";
  else cout<<"No"<<"\n";
    return 0; 
}

or

#include "bits/stdc++.h"
using namespace std;
#define LL long long
 
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.size();i+=2){
      if(s[i]!='h' or s[i+1]!='i'){
           cout<<"No"<<"\n";
           return 0;
      }
  }
  cout<<"Yes"<<"\n";
}