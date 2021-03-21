#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    pair<int,string> p[n];
    set<string>st;
    st.clear();

    for(int i=0; i<n; i++){
        cin>>str[i];
        p[i].first=str[i].length();
        p[i].second=str[i];
    }

    sort(p,p+n);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            string s1 = p[i].second;
            string s2 = p[j].second;

            if(s2.find(s1)!=string::npos){
                continue;
            }
            else{
                cout<<"NO"<<"\n";
                return 0;
            }
        }
    }

    cout<<"YES"<<"\n";
    for(int i=0; i<n; i++){
        cout<<p[i].second<<"\n";
    }
    return 0;
}
