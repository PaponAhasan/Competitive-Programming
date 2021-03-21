#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        std::vector<long long>v ;
        set<long long>s;
        long long a,b,c;
        cin>>a>>b>>c;
        long long ar[c];
        for(long long i=0; i<c; i++){
            cin>>ar[i];
            s.insert(ar[i]);
        }

        long long k=1LL;
        if(s.find(b)!=s.end()){
            k=0;
        }

        if(k){
            cout<<"0"<<"\n";
        }
        else {
            long long l=b;
            long long r=b;
            while(true){

                if(l>1){
                    l--;
                }

                if(r<a){
                    r++;
                }

                if(s.find(l)==s.end()){
                    cout<<abs(b-l)<<"\n";
                    break;
                }

                if(s.find(r)==s.end()){
                    cout<<abs(b-r)<<"\n";
                    break;
                }
            }
        }

    }
    return 0;
}

