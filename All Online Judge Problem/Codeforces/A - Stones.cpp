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

char uplowch(char ch)
{
    if(ch >= 'A' &&  ch <= 'Z')
        ch += 32;
    return ch;
}
char lowupch(char ch)
{
    if(ch >= 'a' &&  ch <= 'z')
        ch -= 32;
    return ch;
}
bool isalpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return true;
    return false;
}

int main()
{
    int t,sum,A[100];
    cin>>t;
    while(t--)
    {
         sum=0;
        for(int i=0;i<3;i++)
            cin>>A[i];

        // sort(a,a+3);
        while(A[1]>=1 && A[2]>=2){
            sum=sum+3;
            A[2]-=2;
            A[1]--;
        }

        while(A[0]>=1 && A[1]>=2)
        {
            sum=sum+3;
            A[1]-=2;
            A[0]--;
        }

        cout<<sum<<endl;

    }
    return 0;

///(a[1]>=1 && a[2]>=2
}
