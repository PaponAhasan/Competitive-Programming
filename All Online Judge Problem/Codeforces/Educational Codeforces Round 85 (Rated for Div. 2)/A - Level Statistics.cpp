#include"bits/stdc++.h"
using namespace std;
#define MAX 101
int a[MAX],b[MAX];
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
           cin>>a[i]>>b[i];
        }
        int x=0,y=0,ok=true;
        for(int i=0;i<n;i++){
           if(a[i]<x or b[i]<y or a[i]-x < b[i]-y){
               ok=false;
               break;
           }
           x=a[i];
           y=b[i];
        }
        puts((ok)?"YES":"NO");
    }
    return 0;
}