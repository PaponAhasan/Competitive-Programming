#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int n,A[1000],B[10000],C[10000],sum1=0,sum2=0,sum3=0;
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;

    int* A=(int*)malloc(n*sizeof(int));
    int* B=(int*)malloc(n*sizeof(int));
    int* C=(int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        cin>>A[i];
        sum1=sum1+A[i];
    }

    for(int i=0; i<n-1; i++){
        cin>>B[i];
        sum2=sum2+B[i];
    }

    for(int i=0; i<n-2; i++){
        cin>>C[i];
        sum3=sum3+C[i];
    }

    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl;
    return 0;
}
