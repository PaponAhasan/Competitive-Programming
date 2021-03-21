#include "bits/stdc++.h"
using namespace std;
#define LL long long

void Solve(){
    LL n;
    while(cin>>n and n>=0LL){
        LL Male,Female,Total;
        Male = 1LL;
        Female = 1LL;
        Total = 0LL;
        for(LL i=0;i<=n;i++){
            Male = Total;
            //Total = (Male*2)+ Female -Male;
            Total = Female + Male;
            Female = Male + 1LL;
        }
        cout<<Male<<" "<<Total<<"\n";
        
    }
}

int main()
{
    Solve();
    return 0; 
}

/*
Input    Output
0         0 1
1         1 2
2         2 4
3         4 7        
4         7 12
5        12 20
6        20 33
7        33 54
8        54 88
-1       NOT processed.
/*