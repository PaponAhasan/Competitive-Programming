#include <set>
#include <iostream>
 
int main() {
  set<int> set = { 6, 1, 3, 4, 2, 5 };
  for (auto it = set.begin(); it != set.end(); ++it)
    std::cout << *it << "\n";
}