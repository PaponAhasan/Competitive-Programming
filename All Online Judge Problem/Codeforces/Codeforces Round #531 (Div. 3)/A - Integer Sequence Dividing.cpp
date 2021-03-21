#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int r=n/2;
    if(n&1){
        if(r&1)cout<<"0";
        else cout<<"1";
    }
    else{
        if(r&1)cout<<"1";
        else cout<<"0";
    }
}

or

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    n=(n*(n+1))/2;
    if(n&1)cout<<"1";
    else cout<<"0"<<"\n";
}