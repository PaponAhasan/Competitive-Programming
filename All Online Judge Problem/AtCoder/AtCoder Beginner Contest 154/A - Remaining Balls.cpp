#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int n,m;
    cin>>n>>m;
    string f;
    cin>>f;
    
    if(f==s){
        n--;
    }
    else m--;
    cout<<n<<" "<<m<<"\n";
    return 0;
}
