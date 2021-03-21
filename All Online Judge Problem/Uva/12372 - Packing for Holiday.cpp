#include<bits/stdc++.h>
using namespace std;

int main() {
	int C = 1, tc;
	int l,w,h;

	cin>>tc;
	while(tc--){
		cin>>l>>w>>h;

		printf("Case %d: ",C++);
		if(l<=20 && w<=20 && h<=20) cout<<"good"<<"\n";
		else cout<<"bad"<<"\n";
	}

	return 0;
}
