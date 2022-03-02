#include<iostream>
using namespace std;
 
int coun[10000];
 
void count_sort(int A[],int n,int mx)
{
    int B[100],l;
 
    for(int i=0; i<n; i++){
        ++coun[A[i]];
    }
 
    for(int i=1; i<=mx; i++){
        coun[i]=coun[i]+coun[i-1];
    }
 
    for(int i=n-1; i>=0; i--){
        ///l= --coun[A[i]];
        ///B[l]=A[i];
 
         l = A [ i ] ;
         B[coun[ l ] - 1] = l ;
         coun[ l ] = coun[ l ] - 1;
 
        //B[--coun[A[i]]]=A[i];
    }
 
    for(int i=0; i<n; i++){
        A[i]=B[i];
    }
 
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}
 
int main()
{
    int mx=0,n,A[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
        mx=max(mx,A[i]);
    }
 
    count_sort(A,n,mx);
    return 0;
}