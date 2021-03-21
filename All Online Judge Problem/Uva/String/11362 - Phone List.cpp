// C++ program to find sum of two large numbers.
#include<bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        vector<string>v;
        string str;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>str;
            v.push_back(str);
        }
        sort(v.begin(),v.end());
        int ok=true;
        for(int i=0; i<n-1; i++){
            if(v[i+1].size()>= v[i].size()){
                string s=v[i+1].substr(0,v[i].size());
                if(s==v[i]){
                    ok=false;
                    break;
                }
            }
        }

        if(ok) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        v.clear();
    }

    return 0;
}

