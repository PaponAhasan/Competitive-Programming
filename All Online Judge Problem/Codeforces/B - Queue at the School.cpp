#include <bits/stdc++.h>
using namespace std;

const int N=51;
int n,t,ok=0,f=0;
char str[N];

void Case(){
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
}

void length(){

    for(int j=0; j<t; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(str[i]=='B'&&str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
    }
      cout<<str<<"\n";
}

int main() {
    Case();
    length();
    return 0;
}
