#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
     scanf("%lld%lld",&n,&k);

    char str[200001];
    char word[27];

    scanf("%s",str);

    int malt[27];
    for(int i=0; i<k; i++)
    {
        cin>>word[i];
        malt[word[i]-'a']=1;
    }

    long long ok=0,sum=0;
    for(int i=0; i<n; i++)
    {
        if(malt[str[i]-'a'])
        {
            ok++;
        }
        else
            ok=0;

        sum+=ok;

    }
    printf("%lld\n",sum);

    return 0;
}

