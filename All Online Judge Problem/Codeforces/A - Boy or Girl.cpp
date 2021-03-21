#include<iostream>
#include<cstdio>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    char S[100];
    scanf("%s",S);
    int cnt=0;
    int l=strlen(S);
    sort(S,S+l);
    for(int i=0;i<l;i++){
        if(S[i]!=S[i+1])
            cnt++;
    }

    if(cnt%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;

}
