#include<stdio.h>
int main()
{
    long long t,Case=0,x,y;
    scanf("%lld",&t);
    while(t--)
    {
        Case++;
        long long x1,y1,x2,y2,m,i;
        scanf("%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&m);
        printf("Case %lld:\n",Case);
        for(i=1; i<=m; i++)
        {
            scanf("%lld%lld",&x,&y);

            if(x==0 || y==0)
                printf("No\n");
            else if((x1<x && x2>x)&& (y1<y && y2>y))
                printf("Yes\n");
            else
                printf("No\n");
        }

    }
}
