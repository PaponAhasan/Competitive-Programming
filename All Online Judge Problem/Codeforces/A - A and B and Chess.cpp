#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int sum=0,sum1=0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch;
            if(ch=='.')continue;
            else if(ch=='Q' || ch=='R' || ch=='B'|| ch=='N'|| ch=='P'|| ch=='K'){
                if(ch=='Q')sum=sum+9;
                if(ch=='R')sum=sum+5;
                if(ch=='B')sum=sum+3;
                if(ch=='N')sum=sum+3;
                if(ch=='P')sum=sum+1;
                if(ch=='K')sum=sum+0;
            }
            else {
                if(ch=='q')sum1=sum1+9;
                if(ch=='r')sum1=sum1+5;
                if(ch=='b')sum1=sum1+3;
                if(ch=='n')sum1=sum1+3;
                if(ch=='p')sum1=sum1+1;
                if(ch=='k')sum1=sum1+0;
            }
        }
    }

    //cout<<sum<<" "<<sum1<<endl;
    if(sum==sum1)cout<<"Draw"<<endl;
    else if(sum>sum1)cout<<"White"<<endl;
    else cout<<"Black"<<endl;
}
