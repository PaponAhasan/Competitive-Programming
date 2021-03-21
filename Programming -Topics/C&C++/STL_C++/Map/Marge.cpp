#include <map>
#include <iostream>
#include <string>
 
int main()
{
  map<int,string> ma {{1, "apple"}, {5, "pear"}, {10, "banana"}};
  map<int,string> mb {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
  map<int,string> u;
  u.merge(ma);
  cout << "ma.size(): " << ma.size() << '\n';
  u.merge(mb);
  cout << "mb.size(): " << mb.size() << '\n';
  cout << "mb.at(5): " << mb.at(5) << '\n';
  for(auto const &kv: u)
    cout << kv.first << ", " << kv.second << '\n';
    
    /*
ma.size(): 0
mb.size(): 1
mb.at(5): X
1, apple
2, zorro
4, batman
5, pear
8, alpaca
10, banana
*/
}