/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    long long cnt=0;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='"'){
            cnt++;
            if(cnt%2==1)
                printf("``");
            else printf("''");
        }
        else printf("%c",ch);
    }

    return 0;
}