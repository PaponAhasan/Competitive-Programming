#include<iostream>
#include<cstdio>
#include<string>
#include<ctype.h>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include <map>
#include <set>
#include <bitset>
#include <math.h>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a,cnt=0;
        cin>>x;
//        for(int i=1;i<=x;i++){
//            a=i;
//            b=x-i;
//            if(b-a==4){
//                if((b%2==0 && a%2==0) ||(b%2==1 && a%2==1)){
//                    cnt++;
//                    break;
//                }
//            }
//        }

        if(x==10)
            cout<<"YES"<<endl;
        else if(x<=11)
        {
            if(x%3==0 || x%7==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

        else
            cout<<"YES"<<endl;
    }
    return 0;
}
