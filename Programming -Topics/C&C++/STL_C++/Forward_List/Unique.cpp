#include <iostream>
#include <forward_list>
 
int main()
{
  forward_list<int> x = {1, 2, 2, 3, 3, 2, 1, 1, 2};
 
  cout << "contents before:";
  for (auto val : x)
    cout << ' ' << val;//1 2 2 3 3 2 1 1 2
 
  x.unique();
  cout << "contents after unique():";
  for (auto val : x)
    cout << ' ' << val;//1 2 3 2 1 2
 
  return 0;
}