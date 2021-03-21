#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
    
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
       v.push_back(make_pair (x, y)); 
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if((v[i].first > v[j].first and v[i].second < v[j].second) 
                or (v[i].first < v[j].first and v[i].second > v[j].second) ){
                    cout<<"NO"<<"\n";
                    return;
                }
        }
    }
    
    int u=0,w=0;
    string s;
    for(int i=0;i<v.size();i++){
        if(u < v[i].first){
            for(int j=0;j<v[i].first-u;j++)
            s.push_back('R');
            u=v[i].first;
        }
        if(w < v[i].second){
            for(int j=0;j<v[i].second-w;j++)
            s.push_back('U');
            w=v[i].second;
        }
    }
    cout<<"YES"<<"\n";
    cout<<s<<"\n";
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc-->0) {
	    solve();
	}
    return 0; 
}

---------------------------------------------------------

#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
    LL n;
    cin >> n;
    multimap <int, int> mp;
    multimap <int, int> :: iterator it;
    set<int>l,m;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
       mp.insert(pair <int, int> (x, y)); 
    }
    
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        int L=0;
        for (auto itt = mp.begin(); itt != mp.end(); ++itt){
            if(it->first == itt-> first and it->second == itt->second ) L=1;
            if(( it->first > itt->first and it->second < itt->second) or (it->first < itt->first and it->second > itt->second) and L) {
                cout<<"NO"<<'\n';
                return;
            }
        }
    }
    
      U=0,R=0;
      cout<<"YES"<<"\n";
    for (it = mp.begin(); it != mp.end(); ++it) { 
        if(it->first > R){
            for(int i=0;i<it->first-R;i++)
               cout<<"R";
               R=it->first;
        }
        
         if(it->second > U){
            for(int i=0;i<it->second-U;i++)
               cout<<"U";
               U=it->second;
        }
    }
    cout<<"\n";
    
}

int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc-->0) {
	    solve();
	}
    return 0; 
}