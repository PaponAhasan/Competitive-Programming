#include <bits/stdc++.h>
using namespace std;

int temp[100000];
int main()
{
    int n,a;
    cin>>n>>a;
    set<char>st;
    for(int i=0;i<n;i++){
         char s;
         cin>>s;
         temp[s-'A']++;
        st.insert(s);
    }

    if(st.size()==a){
        int mn=1e5;
        for(int i=0;i<st.size();i++){
            mn=min(mn,temp[i]);
        }
        cout<<mn*st.size()<<"\n";
    }
    else cout<<"0"<<"\n";
    return 0;
}
