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

    for(i=1; i<=n; i++)
    {
       if(i*5<=time)
        count++;
       time=time-i*5;

//        if(ans>time)
//            break;
//
//        ++count;
//
//       else{
//            ans=(time-j);
//        time=ans;
//        j=j+5;
//        count++;
       }

    printf("%d",count);
    return 0;
}

