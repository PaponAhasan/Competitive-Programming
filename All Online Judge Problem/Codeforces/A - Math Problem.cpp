#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {
       int n,l,r,mx,mn,mx_l,mn_r;
        scanf("%d",&n);

        mx_l= 0;
        mn_r= 1e9;

        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&l,&r);

            mx_l=max(mx_l,l);
            mn_r=min(mn_r,r);
        }

        int sml_cmn_len=max(0,mx_l-mn_r);
        printf("%d\n",sml_cmn_len);
//        int mx=*max_element(arr, arr + n);
//        int mn=*min_element(arr, arr + n);

    }
    return 0;

}

