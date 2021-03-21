#include <string>
#include <iostream>
using namespace std;
 
int main() {
    basic_string<char> str = "string";
    const char* cptr = "C-string";
    const char carr[] = "Two and one";
 
    string output;
 
    //Append a char 3 times. 
    output.append(3, '*'); //***
 
    //Append a whole string
    output.append(str); //***string
 
    //Append part of a string (last 3 letters, in this case)
    output.append(str, 3, 3); // ***stringing
 
    //Append part of a C-string
    output.append(1, ' ').append(carr, 4); //***stringing Two
 
    //Append a whole C-string
    output.append(cptr);  //***stringing Two C-string
 
    //Append range
    output.append(&carr[3], end(carr)); //***stringing Two C-string and one
 
    //Append initializer list
    output.append({ ' ', 'l', 'i', 's', 't' }); //***stringing Two C-string and one list
}