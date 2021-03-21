#include <iostream>
#include <set>
 
int main()
{
    set<int> example = {1, 2, 3, 4};
 
    if(example.contains(2)) {
        cout << "Found\n";
    } else {
        cout << "Not found\n";
    }
}