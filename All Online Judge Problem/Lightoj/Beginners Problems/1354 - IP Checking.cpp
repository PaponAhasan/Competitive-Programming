#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long a,b,c,d,m,n,o,p;
        long long cnt1=-1,cnt2=-1,cnt3=-1,cnt4=-1;
        long long sum1=0,sum2=0,sum3=0,sum4=0;
        char ch1,ch2,ch3,ch4,ch5,ch6;
        cin>> a>>ch1>>b>>ch2>>c>>ch3>>d;
        cin>> m>>ch4>>n>>ch5>>o>>ch6>>p;

        while(m!=0)
        {
            long long tem=m%10;
            if(tem==1)
            {
               cnt1++;
                sum1=sum1+pow(2,cnt1);
           //sum1=sum1+tem;


           }
            else
                cnt1++;
                m=m/10;
        }

        while(n!=0)
        {
            long long tem=n%10;
            if(tem==1)
            {
                cnt2++;
                sum2=sum2+pow(2,cnt2);
            }
            else
                cnt2++;
                 n=n/10;
        }

        while(o!=0)
        {
            long long tem3=o%10;

            if(tem3==1)
            {
                cnt3++;
                sum3=sum3+pow(2,cnt3);
            }
            else
                cnt3++;
                 o=o/10;
        }

        while(p!=0)
        {
            long long tem=p%10;
            if(tem==1)
            {
                cnt4++;
                sum4=+sum4+pow(2,cnt4);
            }
            else
                cnt4++;
                p=p/10;
        }

        if(sum1==a && sum2==b && sum3==c && sum4==d)
            cout<<"Case "<<i<<":"<<" Yes"<<endl;

        else
            cout<<"Case "<<i<<":"<<" No"<<endl;
    }
    return 0;
}

