#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x=pow(2,n);
    int y=m%x;
    cout<<y<<endl;
    return 0;
}
