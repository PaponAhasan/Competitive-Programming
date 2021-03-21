/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <ctype.h>
#include <conio.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include <limits.h>
#include <stdlib.h>

#define pb       push_back
#define Sort(v)  sort(v.begin(),v.end())
#define Fin      freopen("input.txt","r",stdin)
#define Fout     freopen("output.txt","w",stdout)
#define precision(a) cout << fixed << setprecision(a)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define MAX_SIZE 100100

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
const double pi = acos(-1.0);

char uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
bool isalpha(char ch){if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return true; return false;}

/***
    int bigmod( int a, int p, int M ) { // finds a ^ p MOD M
    int res = 1, x = a;
    while( p ) {
        if( p & 1 ) res = (res * x) % M;
        x = (x * x) % M;
        p >>= 1;
    }
    return res;
}***/

/***
    swap() without any extra variable
    Suppose x = 6, y = 2
    x = x + y ( 6 + 2 = 8 )
    y = x - y ( 8 - 2 = 6 )
    x = x - y ( 8 - 6 = 2 )
    Now x = 2, y = 6

***/

int main()
{
    ll n,m,odd,even;

    cin>>n;

    if(n%2){
        cout<<"-"<<(n/2)+1<<endl;
    }

    else{
        cout<<n/2<<endl;
    }

    return 0;

