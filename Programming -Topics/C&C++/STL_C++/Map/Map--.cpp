#include <iostream>
#include <string>
#include <iomanip>
#include <map>
 
template<typename Map>
void print_map(Map& m)
{
   cout << '{';
   for(auto& p: m)
        cout << p.first << ':' << p.second << ' ';
   cout << "}\n";
}
 
struct Point { double x, y; };
struct PointCmp {
    bool operator()(const Point& lhs, const Point& rhs) const { 
        return lhs.x < rhs.x; // NB. intentionally ignores y
    }
};
 
int main()
{
  map<string, int> map1;
  map1["something"] = 69;
  map1["anything"] = 199;
  map1["that thing"] = 50;
  print_map(map1);//anything:199 something:69 that thing:50
 
 // Range constructor
  map<string, int> iter(map1.find("anything"), map1.end());
  print_map(iter);//{anything:199 something:69 that thing:50 }
  print_map(map1);//{anything:199 something:69 that thing:50 }
 
  //Copy constructor
  map<std::string, int> copied(map1);
  print_map(copied);//{anything:199 something:69 that thing:50 }
  print_map(map1);//{anything:199 something:69 that thing:50 }
 
  //Move constructor
  map<string, int> moved(move(map1));
  print_map(moved);//{anything:199 something:69 that thing:50 }
  print_map(map1);//{}
 
  Initializer list constructor
  const map<string, int> init {
    {"this", 100},
    {"can", 100},
    {"be", 100},
    {"const", 100},
  };
  print_map(init);//{be:100 can:100 const:100 this:100 }
 
 
  // Custom Key class option 1:
  // Use a comparison struct
  map<Point, double, PointCmp> mag = {
      { {5, -12}, 13 },
      { {3, 4},   5 },
      { {-8, -15}, 17 }
  };
 
  for(auto p : mag)
      cout << "The magnitude of (" << p.first.x
                << ", " << p.first.y << ") is "
                << p.second << '\n';
/*The magnitude of (-8, -15) is 17
The magnitude of (3, 4) is 5
The magnitude of (5, -12) is 13*/
 
  // Custom Key class option 2:    
  // Use a comparison lambda
  // This lambda sorts points according to their magnitudes, where note that
  //  these magnitudes are taken from the local variable mag
  auto cmpLambda = [&mag](const Point &lhs, const Point &rhs) { return mag[lhs] < mag[rhs]; };
  //You could also use a lambda that is not dependent on local variables, like this:
  //auto cmpLambda = [](const Point &lhs, const Point &rhs) { return lhs.y < rhs.y; };
  std::map<Point, double, decltype(cmpLambda)> magy(cmpLambda);
 
  //Various ways of inserting elements:
  magy.insert(std::pair<Point, double>({5, -12}, 13));
  magy.insert({ {3, 4}, 5});
  magy.insert({Point{-8.0, -15.0}, 17});
 
  for(auto p : magy)
      cout << "The magnitude of (" << p.first.x
                << ", " << p.first.y << ") is "
                << p.second << '\n';
/*
The magnitude of (3, 4) is 5
The magnitude of (5, -12) is 13
The magnitude of (-8, -15) is 17
*/
}