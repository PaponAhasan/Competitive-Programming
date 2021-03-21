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
    long long n,x,count=0,i=1,j=1;
    cin>>n>>x;

         for(int i=2;i<=n;i++){
             if(x%i==0 && x/i<=n)
                count++;
         }

         for(int i=1;i<=n;i++){
             if(x==i)
                count++;
         }

//    while(i<=n){
//
//        if(i*j==x && j<=n){
//            count++;
//            i++;
//            j=0;
//        }
//        else if(j>n){
//            i++;
//            j=0;
//        }
//        j++;
//    }


    cout<<count<<endl;

    return 0;
}
