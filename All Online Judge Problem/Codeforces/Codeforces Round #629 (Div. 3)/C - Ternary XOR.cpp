#include "bits/stdc++.h"
using namespace std;
#define LL long long
int n, k;

void solve() {
    LL n;
    cin>>n;
    string s;
    cin>>s;
    string a,b;
    int m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            a.push_back('0');
            b.push_back('0');
        }
        else if(s[i]=='2'){
            if(m==0){
                a.push_back('1');
                b.push_back('1');
            }
            else{
                 a.push_back('0');
                 b.push_back('2');
            }
        }
        else{
            if(m){
                a.push_back('0');
                b.push_back('1');
            }
            else{
                a.push_back('1');
                b.push_back('0');
                m++;
            }
        }
    }
    cout<<a<<"\n"<<b<<'\n';  
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--) {
       solve();
    }
    return 0; 
}