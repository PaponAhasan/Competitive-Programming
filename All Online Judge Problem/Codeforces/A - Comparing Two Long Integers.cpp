#include "bits/stdc++.h"
using namespace std;
#define LL long long
void solve() {
	string a,b;
	cin>>a>>b;
	vector<char>v,vc;
	int l=0;
	for(int i=0;i<a.size();i++){

	    if(a[i]!='0' || l){
	        v.push_back(a[i]);
	        l++;
	    }
	}
	l=0;
	for(int i=0;i<b.size();i++){
	    if(b[i]!='0' || l){
	        vc.push_back(b[i]);
	        l++;
	    }
	}
	if(v.size()!=vc.size()){
	    if(v.size()>vc.size()) cout<<">"<<"\n";
	    else cout<<"<"<<"\n";
	}
	else {
	    int s,sm;
	    for(int i=0;i<v.size();i++){
	        s=v[i]-'0';
	        sm=vc[i]-'0';
	        if(s>sm) { cout<<">"<<"\n";return;}
	        else if(s<sm) { cout<<"<"<<"\n"; return;}
	        else continue;
	    }
	    cout<<"="<<"\n";
	}
}
/*
OR-->
void solve() {
	string a,b;
	cin>>a>>b;

	string tmp="";

	int d=abs((int)a.size()-(int)b.size());

	for(int i=0;i<d;i++){
	     tmp+='0';
	}

	if(a.size()>b.size())
	    b=tmp+b;
    else a=tmp+a;

	if(a > b) cout << '>';
	 else if(a < b) cout << '<';
	  else cout << '=';
}
*/
int main()
{
	solve();
 	return 0;
}
