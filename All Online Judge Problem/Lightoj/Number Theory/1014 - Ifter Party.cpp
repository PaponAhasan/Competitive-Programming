#include "bits/stdc++.h"
using namespace std;
#define LL long long
int Case=0;
 
int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        cout<<"Case "<<++Case<<": ";
        vector<LL>Divisor;
        LL P,L;
        cin>>P>>L;
        LL Num = P-L;
        if(Num<=L){
            puts("impossible");
            continue;
        }
        for(LL i=1;i*i<=Num;i++){
            if(Num%i==0LL){
                if(i>L)
                Divisor.push_back(i);
                if((Num/i)>L and i*i!=Num)
                Divisor.push_back(Num/i);
            }
        }
        sort(Divisor.begin(),Divisor.end());
        for(LL i=0;i<Divisor.size();i++){
            cout<<Divisor[i];
            (i+1==Divisor.size()?cout<<"\n":cout<<" ");
        }
    }
    return 0;
}