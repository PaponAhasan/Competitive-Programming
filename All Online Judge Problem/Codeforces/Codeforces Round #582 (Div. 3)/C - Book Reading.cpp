#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        long long n,m;
        cin>>n>>m;
        
        long long d=n/m;
        long long R=d/10LL;
        long long r=d%10LL;
        
        if(n<m or m%10LL==0LL){
            cout<<"0"<<"\n";
            continue;
        }
        
        if(m%5LL==0LL){
            (d&1LL)?cout<<((d/2LL)*5LL)+5LL:cout<<(d/2LL)*5LL;
            cout<<"\n";
            continue;
        }
        
        long long s=0LL;
        if(m&1LL){
            for(long long i=1LL;i<=9LL;i++){
                s+=(R*i);
            }
             for(long long i=m;i<=m*r;i+=m){
                s+=(i%10LL);
            }
            cout<<s<<"\n";
        }
        else{
            for(long long i=2LL;i<=8LL;i+=2LL){
                s+=(R*i);
            }
            for(long long i=2LL;i<=8LL;i+=2LL){
                s+=(R*i);
            }
            for(long long i=m;i<=m*r;i+=m){
                s+=(i%10LL);
            }
            cout<<s<<"\n";
        }
    }
    return 0LL;
}