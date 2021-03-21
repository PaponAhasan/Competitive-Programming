#include <cassert>
#include <iterator>
#include<iostream>
#include <string>
using namespace std;
int main()
{
    string s = "xmplr";
 
    s.insert(0, 1, 'E'); //Exmplr
    
    s.insert(2, "e"); //Exemplr 
    
    s.insert(6, "a"s); //Exemplar
    
    s.insert(8, " is an example string."s, 0, 14); //Exemplar is an example
    
    s.insert(s.cbegin() + s.find_first_of('n') + 1, ':'); //Exemplar is an: example
    
    s.insert(s.cbegin() + s.find_first_of(':') + 1, 2, '='); //Exemplar is an:== example
 
    {
        string seq = " string";
        s.insert(s.begin() + s.find_last_of('e') + 1,begin(seq), end(seq));
        //Exemplar is an:== example string
    }
 
    s.insert(s.cbegin() + s.find_first_of('g') + 1, { '.' });
    // Exemplar is an:== example string.
}