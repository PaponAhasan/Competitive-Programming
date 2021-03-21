#include "bits/stdc++.h"
using namespace std;

int main()
{
        int tc;
        cin>>tc;
        while(tc--){
            string s;
            cin>>s;
            set<char>st;
            int l=s.size();
            int sm=0;
            sort(s.begin(),s.end());
            for(int i=0;i<l;i++){
                st.insert(s[i]);
                sm+=(s[i]-'0');
            }
            
            int add=((s[0]-'0')*l);
            for(int i=0;i<l;i++){
                add+=i;
            }
           // cout<<add<<" "<<sm<<"\n";
            //continue;
            if(l==st.size() and sm==add)
            cout<<"Yes"<<"\n";
            else cout<<"No"<<"\n";
        }
    return 0;
}