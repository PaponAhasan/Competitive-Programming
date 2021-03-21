#include "bits/stdc++.h"
using namespace std;
#define LL long long

// Int -> number_of_bits can be at most 32 for int values
// Char -> number_of_bits can be at most 8 for char values
int main()
{
    int a = 5;        // binary: 101
    int b = a << 3;   // binary: 101000, or 40 in decimal
    int c = b >> 3;   // binary: 101, or back to 5 like we started with
    
    char a = 5;        // binary (all 8 bits): 00000101
    char b = a << 7;   // binary:              10000000 - the first 1 in 101 was discarded
    
    //In math notation, x << y equals x * 2y, 
    //as long as none of the bits of x get shifted out
    1 <<  0  ==    1
    1 <<  1  ==    2
    1 <<  2  ==    4
    1 <<  3  ==    8
    1 <<  4  ==    16
    ...
    1 <<  8  ==  256
    1 <<  9  ==  512
    1 << 10  == 1024
    ...
    return 0; 
}