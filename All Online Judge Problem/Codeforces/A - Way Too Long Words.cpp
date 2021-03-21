#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        int len=0;
        len=str.length();

        if(len>10){
            cout<<str[0]<<len-2<<str[len-1]<<endl;
        }
        else cout<<str<<endl;
    }
    return 0;
}
