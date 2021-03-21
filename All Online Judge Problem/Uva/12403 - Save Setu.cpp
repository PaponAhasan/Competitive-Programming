#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int sm=0,i=0;
    int n,num;
    cin>>num;
    while(i<num){
        string s;
        cin>>s;
            if(s=="donate"){
                cin>>n;
                sm=sm+n;
            }
            else{
               cout<<sm<<"\n";
            }
        i++;
    }
    return 0;
}

