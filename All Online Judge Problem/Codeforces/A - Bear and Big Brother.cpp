#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int a,b,count=0,sum1=0,sum2=0;
    cin>>a>>b;

    for(int i=0;i<10;i++){
        sum1=(a*3);
        a=sum1;
        sum2=(b*2);
        b=sum2;
        count++;
        //cout<<sum1<<" "<<sum2<<endl;
        if(sum1>sum2)
            break;

    }
    cout<<count<<endl;
    return 0;
}

