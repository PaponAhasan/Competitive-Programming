#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int a;
    cin>>a;
    
    map<string,int>mp;
    map<string, int>::iterator it ;
    //set<string>st;
    //std::vector<string>v;
     string s;
     int mx=0;
    for(int i=0;i<a;i++){
        
        cin>>s;
       //v.push_back(s);
       //st.insert(s);
       mp[s]++;
        mx=max(mx,mp[s]);
    }
       
    //cout<<mx;
        
       for (it = mp.begin(); it != mp.end(); ++it) {
           if(it->second==mx){
               cout<<it->first<<"\n";
           }
        } 
   
    return 0;
}
