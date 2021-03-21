#include "bits/stdc++.h"
using namespace std;

int main()
{
        int n;
        cin>>n;
        int ok=1;
        set<int>s;
        while(true){
            s.insert(n);
             n+=1;
            while(true){
                int r=n%10;
                if(r>0) break;
                n/=10;
            }
            if(s.find(n)!=s.end()) break;
             ok++;
        }
        cout<<ok;
    return 0;
}