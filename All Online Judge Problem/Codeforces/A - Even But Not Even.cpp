#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long tc;
    cin>>tc;
    getchar();
    while(tc--)
    {
        vector<char>v;
        long long n;
        cin>>n;
        getchar();

        char s[3001];
        cin>>s;

        ll k=0LL;

        for(int i=0;i<n;i++){
            if((s[i]-'0')%2==0)
              k++;
        }
        if(k==n || n==0) {
            cout<<"-1"<<"\n";
            continue;
        }

        for(int i=0;i<n;i++){
            if((s[i]-'0')%2!=0){
                v.push_back(s[i]);
            }
        }

         if(v.size()%2==0){
            for(auto x:v)
                cout<<x;
               cout<<"\n";
        }
        else if(v.size()%2!=0) {
            for(int i=0;i<v.size()-1;i++)
                cout<<v[i];
              cout<<"\n";
              if(v.size()<=1) cout<<"-1"<<"\n";
        }

    }
    return 0;
}
