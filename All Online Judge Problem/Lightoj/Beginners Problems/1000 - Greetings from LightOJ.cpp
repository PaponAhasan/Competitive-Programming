#include<stdio.h>
int main()
{
    int i,a,b,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
}

