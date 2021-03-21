#include <algorithm>
#include <cassert>
#include <cstring>
#include <string>
#include<iostream>
using namespace std;
 
int main()
{
  string s="Papon"; 
  s.append("42"); // Papon42
  s.shrink_to_fit();
  s.clear();
  s.capacity();
  s.empty();
  s.size();
  s.length();
  s.max_size();
  s.reserve();
  cout<<s;
}