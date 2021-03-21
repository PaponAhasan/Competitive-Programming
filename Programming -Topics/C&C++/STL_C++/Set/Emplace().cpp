#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> myset{};
    myset.emplace(2);
    myset.emplace(6);
    myset.emplace(8);
    myset.emplace(9);
    myset.emplace(0);
    //0 2 5 6 8 9

    set<string> myset{};
    myset.emplace("This");
    myset.emplace("is");
    myset.emplace("a");
    myset.emplace("computer science");
    myset.emplace("portal")

    for (auto it = myset.begin();
            it != myset.end(); ++it)
        cout << ' ' << *it; //GeeksForGeeks This a computer science is portal


    set<int>::iterator it;
    while (!myset.empty()){
        it = myset.begin();
        sum = sum + *it;
        myset.erase(it);
    }
    cout << sum;//36

    set<pair<char, int>> ms;
    ms.emplace('a', 24);
    ms.insert(make_pair('b', 25));
    for (auto it = ms.begin(); it != ms.end(); ++it)
        cout << " " << (*it).first << " "
             << (*it).second << endl;
    /* a 24
       b 25 */
    return 0;
}

