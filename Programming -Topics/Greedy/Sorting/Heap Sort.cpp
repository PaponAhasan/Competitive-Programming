#include<bits/stdc++.h>
using namespace std;
 
void heapify(int A[],int n,int i){
    int largest=i;
    int l=2*i;
    int r=(2*i)+1;
 
    while(l<n && A[l]>A[largest]){
        largest=l;
    }
 
    while(r<n && A[r]>A[largest]){
        largest=r;
    }
 
    if(largest!=i){
        swap(A[largest],A[i]);
        heapify(A,n,largest);
    }
}
 
void heapsort(int A[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify( A,n,i);
    }
 
    for(int i=n-1;i>=0;i--){
        swap(A[0],A[i]);
        heapify( A,i,0);
    }
}
 
void printArray(int A[], int n)
{
    for (int i=0; i<n; ++i)
        cout << A[i] << " ";
    cout << "\n";
}
 
int main()
{
    int A[]={23,12,56,34,89,39};
    int n=6;
 
    printArray(A,n);
 
    heapsort(A,n);
 
    cout << "\nSorted array is:\n";
    printArray(A,n);
 
    return 0;
}