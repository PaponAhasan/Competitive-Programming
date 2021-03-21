#include "bits/stdc++.h"
using namespace std;
#define LL long long

void join() {
    int n;
    while(cin>>n and n>0){
        string str;
        cin>>str;

        for(int i=0;i<str.size();i+=(str.size()/n)){
            string s = str.substr(i,str.size()/n);
            reverse(s.begin(),s.end());
            cout<<s;
        }
        cout<<"\n";
    }
}

int main()
{
    join();
    return 0; 
}