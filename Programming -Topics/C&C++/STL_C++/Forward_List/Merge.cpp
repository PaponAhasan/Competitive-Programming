#include <iostream>
#include <forward_list>
using namespace std;

ostream& operator<<(ostream& ostr, const std::forward_list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}
 
int main()
{
    forward_list<int> list1 = { 5,9,0,1,3 };
    forward_list<int> list2 = { 8,7,2,6,4 };
 
    list1.sort();
    list2.sort();
    cout << "list1:  " << list1 << "\n";//0 1 3 5 9
    cout << "list2:  " << list2 << "\n";//2 4 6 7 8
    list1.merge(list2);
    cout << "merged: " << list1 << "\n";//0 1 2 3 4 5 6 7 8 9
}