/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cout<<"Lumberjacks:"<<endl;;
    while(t--)
    {
        int ar[10],s[10],cnt=0,j=0;
        for(int i=0; i<10; i++)
        {
            cin>>ar[i];
            s[j]=ar[i];
            j++;
        }

        if(s[0]<s[9])
        {
            sort(s,s+10);
            for(int i=0,j=0; i<10; i++,j++)
            {
                if(ar[i]==s[j])
                {
                    cnt++;
                }
            }
        }

        else
        {
            sort(s, s + 10, greater<int>());
            for(int i=0,j=0; i<10; i++,j++)
            {
                if(ar[i]==s[j])
                {
                    cnt++;
                }
            }

        }

        if(cnt==10)
            cout<<"Ordered"<<endl;
            else cout<<"Unordered"<<endl;


    }
    return 0;
}