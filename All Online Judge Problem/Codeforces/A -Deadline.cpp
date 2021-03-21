#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tc;
    cin>>tc;
    while(tc--){
        std::vector<long long> v;
        long long a,b;
        cin>>a>>b;

        if(a>=b) cout<<"YES"<<"\n";
        else {
            long long diff,s,no=1;
            diff=sqrt(b)+1;
            long long i=0;

            while(i<=diff){
                s=ceil((double)b/(i+1));
                if(i+s<=a) {
                    cout<<"YES"<<"\n";
                    no=0;
                    break;
                }
                i++;
            }
           if(no)
           cout<<"NO"<<"\n";
        }
    }
    return 0;
}
