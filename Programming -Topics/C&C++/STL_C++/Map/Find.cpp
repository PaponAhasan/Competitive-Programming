#include <iostream>
#include <map>

int main()
{  
    map<int,char> example = {{1,'a'},{2,'b'}};
 
    auto search = example.find(2);
    if (search != example.end()) {
        cout << "Found " << search->first << " " << search->second << '\n';
    } else {
        cout << "Not found\n";
    }

    multimap<int, int> mp; 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 3, 20 }); 
    mp.insert({ 4, 50 }); 
  
    for (auto itr = mp.find(3); itr != mp.end(); itr++) 
        cout << itr->first << itr->second << '\n'; 
}