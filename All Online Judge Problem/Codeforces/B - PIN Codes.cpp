#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s[n+1];
        set<string>st;
        for(int i=0; i<n; i++){
            cin>>s[i];
            st.insert(s[i]);
        }
        int k=0,l=0;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n; j++){
                if(s[i]==s[j] && i!=j){
                    k++;
                    s[i][0]=l+'0';
                    while(st.find(s[i])!=st.end()){
                        l++;
                        s[i][0]=l+'0';
                    }
                    if(l>9)
                        l=-1;
                    l++;
                    break;
                }
            }
        }
        cout<<k<<"\n";
        for(int i=0; i<n; i++){
            cout<<s[i]<<"\n";
        }
    }
    return 0;
}

