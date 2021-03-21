#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
   char x[105][105],a[105][105];
   int n = 0,m = 0,i, j;
   while(gets(x[n])) n++;
   memset(a,' ',sizeof(a));
   
   for(i=0;i<n;i++){
       for(j=0;x[i][j];j++){
           a[j][n-i-1] = x[i][j];
       }
      m = m>j?m:j;
   }
   for(i=0;i<m;i++){
   	   a[i][n] = '\0';
       cout<<a[i]<<"\n";
   }
}

int main()
{
    //freopen("in.txt","r",stdin);
    Solve();
    return 0; 
}

  
#include <iostream>
#include <string>

using namespace std;

string sentences[105];

int main()
{
    int pos = 0;
    int longest = 0;
    while (getline(cin, sentences[pos]))
    {
        if (sentences[pos].size() > longest)
            longest = sentences[pos].size();
        ++pos;
    }
    
    for (int j = 0; j < longest; ++j)
    {
        for (int i = pos - 1; i >= 0; --i)
        {
            if (sentences[i].size() > j)
                cout << sentences[i][j];
            else
                cout << ' ';
        }
        cout << '\n';
    }
}