#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define LL long long
#define MXN 10000
#define MOD 10000007

ifstream f("data.in");
ofstream g("data.out");

void solve(){
    int n;
    cin>>n;
    int power = 1;
    vector<int>Ans;
    while(n!=0){
       if(n%10>0){
          Ans.push_back((n%10)*power);
       }
       power*=10;
       n/=10;
    }
    cout<<Ans.size()<<"\n";
    for(auto x:Ans) cout<<x<<" ";
    cout<<"\n";
} 

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}

/*-------------------------------------*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define LL long long
#define MXN 10000
#define MOD 10000007

ifstream f("data.in");
ofstream g("data.out");

void solve(){
    LL n;
    cin>>n;
    LL ok = 0,i = 0;
    vector<pair<int,int>>As;
    while(n!=0){
        LL r = n%10;
        n/=10;
        if(r>0){
           ok++;
           As.push_back(make_pair(r,i));
        }
        i++;
    }
    cout<<ok<<"\n";
    for(int i=0;i<As.size();i++){
        cout<<As[i].first;
        for(int j=0;j<As[i].second;j++){
            cout<<"0";
        }
        cout<<" ";
    }
    cout<<"\n";
} 

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}