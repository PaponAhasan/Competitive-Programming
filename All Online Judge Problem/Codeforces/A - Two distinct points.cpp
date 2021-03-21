#include "bits/stdc++.h"
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
        int l1,r1,l2,r2,l,r;
        scanf("%d%d%d%d",&l1,&r1,&l2,&r2);

        l=(l1+r1)/2;
        r=(l2+r2)/2;

        if(l==r){

            printf("%d %d\n",l,r+1);

        }
        else{
            printf("%d %d\n",l,r);
        }
    }
    return 0;

}
