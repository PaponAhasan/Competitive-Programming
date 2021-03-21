#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    vector<int>v;
    vector<string>vc;

    set<string>st;
    st.insert("bubble");
    st.insert("tapioka");

    int k=0;
    int l= s.size();
    for(int i=0; i<l; i++){
        if(s[i]==' '){
            v.push_back(k);
            k=0;
        }
        else
            k++;
    }

    for(int i=0,j=0; i<s.size(); i++){
        if(s[i]!=' '){
            s[j]=s[i];
            j++;
        }
    }

    int sm=0;
    for(auto x:v)
        sm+=x;
    v.push_back(l-(v.size()+sm));

    string temp;
    int m=0;
    for(int j=0; j<3; ++j){
        temp=s.substr(m,v[j]);
        m+=v[j];
        vc.push_back(temp);
    }

    int f=0;
    for(int i=0; i<3; i++){
        if(st.find(vc[i])==st.end()){
            cout<<vc[i]<<" ";
        }
        else
            f++;
    }
    if(f==3)
        cout<<"nothing";
    cout<<"\n";

    return 0;
}

