#include "bits/stdc++.h"
using namespace std;

void fasrerIO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int *solve(int A[],int n){

    int temp[n],i,j;
    memset(temp,0,sizeof(temp));

    for( i=1; i<n ;i++ ){
        for( j=1; j<n ;j++ ){
            if( A[j]==i && A[j] < A[j-1] && temp[j-1]==0){
                swap(A[j],A[j-1]);
                temp[j-1]=1;
                j=j-2;
            }
            if(A[j]==i)
              break;
        }
    }

    return A;
}

void print_min_per(int p[],int n ){

    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
     printf("\n");
}

int main()
{
    fasrerIO();
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        solve(arr,n);
        print_min_per(arr,n);
    }
    return 0;
}
