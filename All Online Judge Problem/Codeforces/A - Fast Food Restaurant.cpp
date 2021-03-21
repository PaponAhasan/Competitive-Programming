#include "bits/stdc++.h"
using namespace std;
#define LL long long
vector <int> v;
int x,y,z;
void solve() {
    cin>>x>>y>>z;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int x=v[0];
    int y=v[1];
    int z=v[2];
    int sum=0;
    if(x){
        sum++;x--;
    }
    if(y){
        sum++;y--;
    }
    if(z){
        sum++;z--;
    }

    if(x and y){
        sum++;x--;y--;
    }
    if(x and z){
        sum++;z--;x--;
    }
    if(y and z){
        sum++;y--;z--;
    }

    if(x and y and z){
        sum++;x--;y--;z--;
    }
    cout<<sum<<"\n";
    v.clear();
}

int main()
{
   ios_base::sync_with_stdio(0);
     cin.tie(NULL);
	int tc;
	scanf("%d", &tc);
	while(tc--) {
		solve();
	}
 	return 0;
}
