#include "bits/stdc++.h"
using namespace std;
#define LL long long
int a[100010];
char s[100010];
const int maxn = 400010;
const int logn = 19;
vector <int> vc[maxn];
set<int>st;
list<int>li;
map<string,int>mp;
pair<int,int>p;
bool mark[maxn];
int n, k;

void join() {
   string s;
   cin>>s;
   cout<<s;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
     for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--) {
	    solve();
	    //join();
	}
    return 0; 
}