#include<bits/stdc++.h>

using namespace std;

int main()
{

    int count=0,cnt=0,j,i,ar[10],N;
    int l,r;
    cin>>l>>r;
    //int *ar = (int *) malloc(100 * sizeof(int));

    for(i=l; i<=r; i++)
    {
        cnt=0;
        count=0;
        j=0;
         N=i;
        while(N!=0)
        {
            cnt++;
            ar[j]=N%10;
            j++;
            N=N/10;

        }
        // size_t n1 = sizeof(ar);
//        sort(ar,ar+n);

//        for(int n=0;n<cnt;n++)
//            cout<<ar[n]<<" ";
//        cout<<endl;

        for(int j=0; j<cnt; j++)
        {
            for(int k=j+1; k<cnt; k++)
            {
                if(ar[j]==ar[k])
                {
                    count=1;
                    break;
                }
            }
            if(count==1)
                break;
        }
        //cout<<count<<endl;
        if(count==0)
            break;
        //free(ar);
    }

    if(count==0)
    {
        for(int i=cnt-1; i>=0; i--)
        {
            cout<<ar[i];
        }
    }
    else
        cout<<"-1";

    return 0;
}

