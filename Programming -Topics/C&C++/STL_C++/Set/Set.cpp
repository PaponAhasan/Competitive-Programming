#include <iostream>
#include <string>
#include <set>
#include <cmath>
using namespaces std;

struct Point { double x, y; };
struct PointCmp {
    bool operator()(const Point& lhs, const Point& rhs) const { 
        return hypot(lhs.x, lhs.y) < hypot(rhs.x, rhs.y); 
    }
};
 
int main()
{
  set<string> a;
  a.insert("cat");
  a.insert("dog");
  a.insert("horse");
  for(auto& str: a) cout << str << ' ';//cat dog horse
 
  set<string> b(a.find("dog"), a.end());
  for(auto& str: b)cout << str << ' ';//dog horse
 
  //Copy constructor
  set<string> c(a);
  c.insert("another horse");
  for(auto& str: c) cout << str << ' ';//another horse cat dog horse 
  
  //Move constructor
  set<string> d(move(a));
  for(auto& str: d) cout << str << ' ';//cat dog horse
  
  cout << "moved-from set is ";
  for(auto& str: a) cout << str << ' ';//moved-from set is
 
  //Initializer list constructor
  set<string> e {"one", "two", "three", "five", "eight"};
  for(auto& str: e) cout << str << ' ';//eight five one three two
 
  // custom comparison
  set<Point, PointCmp> z = {{2, 5}, {3, 4}, {1, 1}};
  z.insert({1, -1}); // this fails because the magnitude of 1,-1 equals 1,1
  for(auto& p: z) cout << '(' << p.x << ',' << p.y << ") ";//(1,1) (3,4) (2,5)
}