#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v;
    int n;
    cin>>n;
    string s;
    //getline(cin,s);
    cin>>s;
    string t="xxx";
    for(int i=0;i+2<s.size();i++){
        string sb=s.substr(i,3);
        if(sb==t)
        v.push_back(sb);
    }
    cout<<v.size()<<"\n";
    return 0;
}
