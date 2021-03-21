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


int main()
{
    int a,b,c,x,y,z,n;
    cin>>a>>b>>c;
    int sum1=a+b+c;

    cin>>x>>y>>z;
    int sum2=x+y+z;

    cin>>n;

    int N1=ceil((double)sum1/5);
    //cout<<N1<<endl;
    int N2=ceil((double)sum2/10);
    //cout<<N2<<endl;

    if((N1+N2)<=n)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}
