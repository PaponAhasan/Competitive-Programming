#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        set<long long>s;
        long long a,b,c;
        cin>>a>>b>>c;
        long long ar[c];
        for(long long i=0; i<c; i++){
            cin>>ar[i];
            s.insert(ar[i]);
        }

        long long k=1LL,l=0LL,m=0LL;
        if(s.find(b)!=s.end()){
            k=0;
        }

        if(k){
            cout<<"0"<<"\n";
        }
        else {
            for(int i=b+1;i<=a;i++){
                if(s.find(i)==s.end()){
                    l=abs(b-i);
                    break;
                }
            }

            for(int i=b-1;i>=1;i--){
                if(s.find(i)==s.end()){
                    m=abs(b-i);
                    break;
                }
            }
            if(l>0 && m>0)
             cout<<min(l,m)<<"\n";
             else cout<<max(l,m)<<"\n";
        }

    }
    return 0;
}
