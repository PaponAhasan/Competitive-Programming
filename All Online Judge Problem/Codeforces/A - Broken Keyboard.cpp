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
#include <iostream>
#include <algorithm>
#include <string>

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


void sortString(string &str)
{
    sort(str.begin(), str.end());
    cout << str;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        char  input[501], output[501];
        int no[26] = {0}, n, c, t, x;
        string res;
        char str[501];

        char ch;
        int cnt=1,j=0;
        cin>>res;

        for(int i=0; i<res.length();)
        {
            if(res[i]==res[i+1])
            {
                i=i+2;
                cnt=0;
            }
            else
            {
                ch=res[i];
                str[j]=ch;
                j++;
                i++;
            }
        }

        str[j]='\0';

        n = strlen(str);

        for (int c = 0; c < n; c++)
        {
            ch = str[c] - 'a';
            no[ch]++;
        }

        t = 0;

        for (int ch = 'a'; ch <= 'z'; ch++)
        {
            x = ch - 'a';

            for (c = 0; c < no[x]; c++)
            {
                output[t] = ch;
                t++;
            }
        }
        output[t] = '\0';

        int k;
        for (int i=0; i<j; i++)
        {

            int j;
            for ( k=0; k<i; k++)
                if (output[i] == output[k])
                    break;
            if (i == k)
                cout << output[i];
            // printf("%s", output);


        }
        cout<<endl;
    }

    return 0;
}
