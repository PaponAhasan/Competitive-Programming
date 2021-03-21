#include "bits/stdc++.h"
using namespace std;
 
int main()
{
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
        }
        char c;
        for(auto x:st){
           c=x;
           break;
        }
        int ok=0;
        for(int i=0;i<26;i++){
            for(int j=0;j<n;j++){
                if(s[j]==c){
                    ok++;
                    s[j]='0';
                }
                if(ok==k) goto ANS;
            }
        ++c;
      }
      ANS:
      for(int i=0;i<n;i++){
          if(s[i]=='0') continue;
          else cout<<s[i];
      }
      
    return 0;
}