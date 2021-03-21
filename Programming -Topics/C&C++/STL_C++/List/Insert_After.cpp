#include <forward_list>                                                         
#include <string>                                                               
#include <iostream>                                                             
#include <vector>                                                               
using namespace std;

template<typename T>                                                            
ostream& operator<<(ostream& s, const forward_list<T>& v) {      
    s.put('[');                                                                 
    char comma[3] = {'\0', ' ', '\0'};                                          
    for (const auto& e : v) {                                                   
        s << comma << e;                                                        
        comma[0] = ',';                                                         
    }                                                                           
    return s << ']';                                                            
}                                                                               

 // insert_after holo kono word por..begin or begin++ por add kora  
int main()                                                                      
{                                                                               
    list<string> words {"the", "frogurt", "is", "also", "cursed"};
    cout <<words << '\n'; //the, frogurt, is, also, cursed                                   
 
    auto beginIt = words.begin();                                               
    words.insert_after(beginIt, "strawberry");                                  
    cout <<words << '\n';//the, strawberry, frogurt, is, also, cursed                                 
 
    auto anotherIt = beginIt;                                                   
    ++anotherIt;                                                                
    anotherIt = words.insert_after(anotherIt, 2, "strawberry");                 
    cout <<words << '\n';
    //the, strawberry, strawberry, strawberry, frogurt, is, also, cursed                                   
 
    vector<string> V = { "apple", "banana", "cherry"};                
    anotherIt = words.insert_after(anotherIt, V.begin(), V.end());              
    cout<< words << '\n';
    //the, strawberry, strawberry, strawberry, apple, banana, cherry, frogurt, is, also, cursed                                    
 
    words.insert_after(anotherIt, {"jackfruit", "kiwifruit", "lime", "mango"});
    cout<< words << '\n';
    //the, strawberry, strawberry, strawberry, apple, banana, cherry, jackfruit, kiwifruit, lime, mango, frogurt, is, also, cursed                                  
}