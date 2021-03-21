/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include<bits/stdc++.h>
using namespace std;
vector<long long>v;

//long long gcd(long long a, long long b) {
//    return b == 0 ? a : gcd(b, a % b);
//}
//
//long long lcm(long long a, long long b) {
//    return a / gcd(a, b) * b;
//}

template <typename T> T gcd(T a,T b){
    if(a < 0) return gcd(-a,b);
    if(b < 0) return gcd(a,-b);
    return (b == 0)?a:gcd(b,a%b);
}
template <typename T> T lcm(T a,T b){
    if(a < 0) return lcm(-a,b);
    if(b < 0) return lcm(a,-b);
    return a*(b/gcd(a,b));
}

int main()
{
    long long n;
    while(cin>>n && n>0)
    {
        v.clear();
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                v.push_back(i);
                if(i!= n/i)
                    v.push_back(n/i);
            }
        }

        //if(sqrt(n)*sqrt(n)==n) v.pop_back();
        long long g=0;
        for(long long i=0; i<v.size(); i++){
            for(long long j=i; j<v.size(); j++){
                //if(((v[i]*v[j])/__gcd(v[i],v[j]))==n)
                if(lcm(v[i],v[j])==n)
                    g++;
            }
        }
        cout<<n<<" "<<g<<"\n";
    }


    return 0;
}

