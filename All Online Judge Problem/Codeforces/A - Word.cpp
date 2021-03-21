#include "bits/stdc++.h"
using namespace std;
#define LL long long
void solve() {
	string a;
	cin>>a;
	int small=0;
	int capital=0;
	for(int i=0;i<a.size();i++){
	    if(a[i]>='a' && a[i]<='z')
	       small++;
	     if(a[i]>='A' && a[i]<='Z')
	       capital++;
	}
	if(capital>small) transform(a.begin(), a.end(), a.begin(), ::toupper);
	else transform(a.begin(), a.end(), a.begin(), ::tolower);
	cout<<a;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	solve();
 	return 0;
}
