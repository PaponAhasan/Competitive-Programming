#include <forward_list>
#include <string>
#include <iostream>
using namespace std;

template<typename T>
ostream& operator<<(ostream& s, const forward_list<T>& v) 
{
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s;
}
 
int main() 
{
    list<string> words1 {"the", "frogurt", "is", "also", "cursed"};
    cout << "words1: " << words1 << '\n';

    list<string> words2(words1.begin(), words1.end());
    cout << "words2: " << words2 << '\n';
 
    list<string> words3(words1);
    cout << "words3: " << words3 << '\n';
    
    list<string> words4(5, "Mo");
    cout << "words4: " << words4 << '\n';
}

/*
Output:
words1: [the, frogurt, is, also, cursed]
words2: [the, frogurt, is, also, cursed]
words3: [the, frogurt, is, also, cursed]
words4: [Mo, Mo, Mo, Mo, Mo] */