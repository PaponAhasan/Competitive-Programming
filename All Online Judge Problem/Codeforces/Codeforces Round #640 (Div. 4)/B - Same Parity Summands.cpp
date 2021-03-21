#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
  int n,k;
  cin>>n>>k;
  int x = n-(k-1);
  int y = n-((k-1)*2);
  
  if(x%2 and x>0){
  	puts("YES");
  	cout<<x<<" ";
  	for(int i=1;i<k;i++) cout<<"1"<<" ";
  	cout<<"\n";
  }
  else if(y%2==0 and y>0){
  	puts("YES");
  	cout<<y<<" ";
  	for(int i=1;i<k;i++) cout<<"2"<<" ";
  	cout<<"\n";
  }
  else puts("NO");
}

int main()
{
     //freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int tc; scanf("%d", &tc);
	while(tc--) {
        solve();
	}
    return 0; 
}