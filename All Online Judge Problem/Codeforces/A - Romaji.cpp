#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin>>s;

    set<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'||
           s[i]=='u')
        st.insert(s[i]);
    }
    for(int i=0;i<s.size();i++){
        if(st.find(s[i])==st.end() && st.find(s[i+1])==st.end() && s[i]!='n'){
            cout<<"NO"<<"\n";
              return 0;
           }
        }
       cout<<"YES"<<"\n";

    return 0;
}
