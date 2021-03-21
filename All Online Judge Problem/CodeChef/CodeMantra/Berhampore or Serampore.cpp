#include "bits/stdc++.h"
using namespace std;
#define LL long long int

void solve(){
	
	string a,b,x,y;
	getline(cin,a);

	transform(a.begin(), a.end(), a.begin(), ::tolower);
	x = "berhampore";
	y = "serampore";
	
	int v = 0,w = 0;
    if (a.find(x)!=string::npos) v++; 
    if(a.find(y)!=string::npos) w++;
    
    if(v and w) puts("Both");
    else if(v) puts("GCETTB");
    else if(w) puts("GCETTS");
    else puts("Others");
}
   
int main()
{
	//freopen("in.txt","r",stdin);
	LL tc;cin>>tc;
	getchar();
	while(tc--)
	solve();
	return 0;
}