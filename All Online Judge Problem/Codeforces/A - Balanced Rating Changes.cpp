#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[13845],cnt=1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }

    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]/2<<endl;
        }

        else
        {
            if(cnt)
            {
                    cout<<(a[i]+1)/2<<endl;
            }

            else
            {

                    cout<<(a[i]-1)/2<<endl;
            }
            cnt=!cnt;
        }
    }
    return 0;

