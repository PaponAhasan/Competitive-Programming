//// make_pair example
//#include <utility>      // std::pair
//#include <iostream>     // std::cout
//
//int main () {
///  std::pair <int,int> foo;
///  std::pair <int,int> bar;
//
///  foo = std::make_pair (10,20);
///  bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>
//
///  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
///  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';
//
//  return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main()
{
          ///ios::sync_with_stdio(false);
	      int  n, a, b;

          cin>>n;
          pair <int,int> P[n];

          //input pair
          for(int i=0; i<n; i++)
          {
            cin>>a>>b;
            P[i] = make_pair(a,b);
           //cin>>P[i].first>>P[i].second;
          }

          //output pair
          for(int i=0; i<n; i++)
          {
            cout<<P[i].first<<" "<<P[i].second<<endl;
          }

    	return 0;
}
