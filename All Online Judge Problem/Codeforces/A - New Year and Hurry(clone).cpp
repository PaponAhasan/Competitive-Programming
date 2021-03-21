#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main()
{
    int n,k,ans=0,i,j=5,time,T,count=0;
    scanf("%d%d",&n,&k);

    T=4*60;
    time=T-k;

    for(i=1; i<=n; i++){

        ans=ans+(i*5);

        if(ans>time)
            break;
        count++;

    }

    printf("%d",count);
    return 0;
}

