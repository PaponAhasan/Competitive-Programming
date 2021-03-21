#include "bits/stdc++.h"
using namespace std;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
        long long a,b;
        cin >> a>>b;
        if(a<b){
            int n=b-a;
            if(n&1)  // odd
                cout<<"1"<<"\n";
            else
                cout<<"2"<<"\n";
        }
        else if(a>b){
            int n=a-b;
            if(n&1) // odd
                cout<<"2"<<"\n";
            else
                cout<<"1"<<"\n";
        }
        else
            cout<<"0"<<"\n";
    }
    return 0;
}
