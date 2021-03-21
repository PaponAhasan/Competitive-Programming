#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   char s[4];
   set<char>st;
   for(int i=0;i<3;i++){
       cin>>s[i];
       st.insert(s[i]);
   }
   if(st.size()>1) cout<<"Yes"<<"\n";
   else cout<<"No"<<"\n";
}
