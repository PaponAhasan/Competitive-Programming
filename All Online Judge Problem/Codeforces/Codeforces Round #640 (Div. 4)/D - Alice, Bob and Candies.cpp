#include "bits/stdc++.h"
using namespace std;
#define LL long long

void solve() {
  int n;
  cin>>n;
  vector<int>in(n);
  deque<int>g;
  for(auto &x:in){
  	cin>>x;
  	g.push_back(x);
  }
  
  int MoveB = 1,MoveA = 0,Alice = 0, Bob = 0,a = 0, b = 0;
  a+=g[0];
  Alice = g[0];
  g.pop_front();
  while(true){
      if(g.empty()) break;
      if(!g.empty())
       while(true){
          if(Alice<Bob or g.empty()){
              MoveA++;
              Alice = 0;
               break;
          }
          Bob+=g.back();
          b+= g.back();
          g.pop_back();
      }
      if(!g.empty())
      while(true){
          if(Bob<Alice or g.empty()){
             MoveB++;
             Bob = 0;
             break;
          }
          Alice+= g.front();
          a+= g.front();
          g.pop_front();
      }
  }
  cout<<MoveA+MoveB<<" "<<a<<" "<<b<<"\n";
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