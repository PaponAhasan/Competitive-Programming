#include "bits/stdc++.h"
using namespace std;
#define LL long long int
  
void solve(){
	LL x,c;
	cin>>x;

	map<int,vector<pair<string,string>>>m;
	int sum = 0;
	for(int i=0;i<x;i++){
	  string a,b;
	  cin>>a>>b;
	  cin>>c;
	  sum+=c;
	  m[c].push_back({a,b});	
	}
	
	double w = sum/(double)x;
	for(auto x:m){
		if(x.first<w){
			for(auto y:x.second){
				cout<<y.first<<" "<<y.second<<" "<<x.first<<"\n";
			}
		}
		else break;
	}
	 
    m.clear();
 	
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	LL tc;cin>>tc;
	while(tc--)
	solve();
	return 0;
}