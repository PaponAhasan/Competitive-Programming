/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,s1,s2,l;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n; i++)
        {

            if(s[i]=='1')
            {
                cnt++;
                s1=n-i;
                break;
            }
//            else if(s[i]=='1' && i>n/2 ){
//                cnt++;
//                sum=n+1;
//                break;
//            }
            //else cnt=0;
        }

        for(int i=n-1; i>=0; i--)
        {

         if(s[i]=='1'){
                cnt++;
                s2=i+1;
                break;
            }
        }

        l=max(s1,s2);

        if(cnt==0)
            cout<<n<<endl;
        else
            cout<<l*2<<endl;


    }
    return 0;
}
