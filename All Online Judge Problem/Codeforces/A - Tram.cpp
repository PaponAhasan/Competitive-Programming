#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,a,b,sum=0,j=0,ar[100],max=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
           scanf("%d%d",&a,&b);
           sum=sum+b-a;
           if(max<sum)
           max=sum;
    }

    printf("%d\n",max);
    return 0;
}

