#include<bits/stdc++.h>
using namespace std;

void solve(string p,string q)
{
    int l=p.length();
    int L=q.length();
    sort(p.begin(),p.end());

    for(int i=0; i+l<=L ; i++)
    {
        string s=q.substr(i,l);
        sort(s.begin(),s.end());
        if(p==s)
        {
            cout<<"Yes"<<"\n";
            return;
        }
    }
    cout<<"No"<<"\n";
    return;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc-- > 0)
    {
        string str;
        cin>>str;
        string s;
        cin>>s;

        solve(str,s);
    }
    return 0;
}
