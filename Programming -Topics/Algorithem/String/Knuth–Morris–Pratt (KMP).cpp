#include "bits/stdc++.h"
using namespace std;
#define LL long long

vector<int>TempArray(string pattern)
{
    vector<int>lps(pattern.length());
    int i = 0;
    for(int j=1;j<(int)pattern.length();){
        if(pattern[i]==pattern[j]){
            lps[j]=i+1;
            i++;
            j++;
        }
        else{
            if(i!=0) i = lps[i-1];
            else lps[j] = 0,j++;
        }
    }
    return lps;
}

void kmp(string text,string pattern)
{
    bool found = false;
    vector<int>lps = TempArray(pattern);
    int i = 0,j = 0;
    // i->text , j->pattern;
    while(i<(int)text.length()){
        if(text[i]==pattern[j]){
            i++,j++;
        }
        else{
            if(j!=0) j = lps[j-1];
            else i++;
        }
        if(j==(int)pattern.length()){
            cout<<"Found"<<"\n";
            cout<<"Index :"<<i-(int)pattern.length()<<"\n";
            j = lps[j-1];
            found = true;
            //break;
        }
    }
    if(!found) cout<<"Not Found"<<"\n";
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        string text,pattern;
        //cin>>text>>pattern;
        getline(cin,text);
        getline(cin,pattern);
        kmp(text,pattern);
    }
    return 0; 
}