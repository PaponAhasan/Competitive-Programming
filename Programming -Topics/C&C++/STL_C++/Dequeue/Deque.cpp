#include <deque>
#include <string>
#include <iostream>
using namespace std;

template<typename T>
ostream& operator<<(ostream& s, const deque<T>& v) 
{
    s.put('[');
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto& e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}
 
int main() 
{
    deque<string> words1 {"the", "frogurt", "is", "also", "cursed"};
    cout << "words1: " << words1 << '\n';
 
    deque<string> words2(words1.begin(), words1.end());
    cout << "words2: " << words2 << '\n';
 
    deque<string> words3(words1);
    cout << "words3: " << words3 << '\n';
    
    deque<string> words4(5, "Mo");
    cout << "words4: " << words4 << '\n';
}