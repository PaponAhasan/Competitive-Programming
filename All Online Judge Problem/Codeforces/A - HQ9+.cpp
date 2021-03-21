#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int length=0;
    length=str.length();

    for(int i=0;i<length;i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9' ){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
