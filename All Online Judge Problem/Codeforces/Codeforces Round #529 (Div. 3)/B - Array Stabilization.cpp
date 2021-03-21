#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &x:v){
       cin>>x;
   }
   sort(v.begin(),v.end());
   
   cout<<min(v[v.size()-2]-v[0],v[v.size()-1]-v[1]);
}