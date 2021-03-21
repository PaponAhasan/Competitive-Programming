#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int a;
    cin>>a;
    
    int even=0,cnt=0;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        if(x%2==0 && (x%3==0 || x%5==0))
           even++;
        if(x%2==0) cnt++;   
    }
    
    if(even==cnt) cout<<"APPROVED"<<"\n";
    else cout<<"DENIED"<<"\n";
    
    
    return 0;
}
