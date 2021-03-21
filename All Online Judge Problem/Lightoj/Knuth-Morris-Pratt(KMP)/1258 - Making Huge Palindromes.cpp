/*
Algorithm: KMP 

Consider the 4th test case
P = anncbaaababaaa
Let
Q = aaababaaabcnna (reverse of P)

Now look how can we construct the shortest palindrome by adding character to the right of P,
with the help of Q

P : anncbaaababaaa|||||
Q : |||||aaababaaabcnna
Ans:anncbaaababaaabcnna

So all we need to do is search for the longest prefix of Q in P. You can do this by using KMP.
*/

#include "bits/stdc++.h"
using namespace std;
#define LL long long
bool found;
int Case=0;
 
vector<int>TempArray(string Pattern)
{
    vector<int>Lps(Pattern.length());
    int i = 0;
    for(int j=1;j<(int)Pattern.length();){
        if(Pattern[i]==Pattern[j])
            Lps[j]=i+1,i++,j++;
        else{
            if(i!=0) i = Lps[i-1];
            else Lps[j] = 0,j++;
        }
    }
    return Lps;
}
 
int Kmp(string Text,string Pattern)
{
    vector<int>Lps = TempArray(Pattern);
    int i=0,j=0;
    while(i<(int)Text.length()){
        if(Text[i]==Pattern[j]){
            i++,j++;
        }else{
            if(j!=0) j = Lps[j-1];
            else i++;
        }
    }
    return j;
}
 
int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    while(tc--) {
        string Text,Rtext;
        cin>>Text;
        Rtext = Text;
        reverse(Rtext.begin(),Rtext.end());
        cout<<"Case "<<++Case<<": ";
        int Match = Kmp(Text,Rtext);
        cout<<(2*(int)Text.length())-Match<<"\n";
    }
    return 0;
}