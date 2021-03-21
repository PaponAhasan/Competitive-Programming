#include <iostream>
#include <forward_list>
 
ostream& operator<<(ostream& ostr, const forward_list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}
 
int main()
{
    forward_list<int> list = { 8,7,5,9,0,1,3,2,6,4 };
 
    cout << "before:     " << list << "\n";
    list.sort();
    cout << "ascending:  " << list << "\n";
    list.reverse();
    cout << "descending: " << list << "\n";
    list.sort(std::greater<int>());
    cout << "descending: " << list << "\n";
}
