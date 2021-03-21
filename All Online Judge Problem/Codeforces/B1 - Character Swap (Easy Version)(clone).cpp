#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,cnt=0;
        scanf("%d",&n);
        char a[10001],b[10001];
        //cin>>a>>b;
        scanf("%s%s",a,b);

        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                for(int j=i; j<n; j++)
                {
                    swap(a[i],b[j]);
                    if(strcmp(a,b)==0)
                    {
                        cnt=1;
                        break;
                    }
                    swap(a[i],b[j]);
                }
            }
            if(cnt)
                break;
        }

        if(cnt)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}

