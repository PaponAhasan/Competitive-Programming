#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    while(cin>>n){
        int temp=n;
        int Np=0;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                Np=1;
                break;
            }
        }

        if(Np==0){
            int num=0;
            while(temp!=0){
                int r=temp%10;
                temp/=10;
                num=(num*10)+r;
            }

            int NP=0;
            for(int i=2; i*i<=num; i++){
                if(num%i==0)
                {
                    NP=1;
                    break;
                }
            }

            if(NP==0 && n!=num)
                cout<<n<<" is emirp."<<"\n";
            else
                cout<<n<<" is prime."<<"\n";
        }
        else
            cout<<n<<" is not prime."<<"\n";
    }
    return 0;
}
