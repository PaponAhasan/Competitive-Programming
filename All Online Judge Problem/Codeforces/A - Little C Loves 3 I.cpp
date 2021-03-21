/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include<limits.h>
#include <stdlib.h>

#define pb       push_back
#define Sort(v)  sort(v.begin(),v.end())
#define Fin      freopen("input.txt","r",stdin)
#define Fout     freopen("output.txt","w",stdout)
#define precision(a) cout << fixed << setprecision(a)
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
    ll n;
    cin>>n;

   if(n%3==0){
      cout<<"1"<<" "<<"1"<<" "<<n-2<<endl;
   }
   else cout<<"1"<<" "<<"2"<<" "<<n-3<<endl;

    return 0;
}
