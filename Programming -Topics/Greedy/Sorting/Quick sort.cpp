/// Divide and Conquer
 
#include<bits/stdc++.h>
using namespace std;
 
int partition(int A[],int low,int high){
    int i,j,pivot,temp;
 
    pivot=A[high];
    i=low-1;
 
    for(j=low; j<high; j++){
        if(A[j]<=pivot){
            i=i+1;
//            temp=A[j];
//            A[j]=A[i];
//            A[i]=temp;
           swap(A[i],A[j]);
        }
    }
 
//    temp=A[high];
//    A[high]=A[i+1];
//    A[i+1]=temp;
      swap(A[i+1],A[high]);
 
    return i+1;
}
 
void quick_sort(int A[],int low,int high){
    if(low>=high){
        return;
    }
 
    int p = partition(A,low,high);
 
    quick_sort(A,low,p-1);
    quick_sort(A,p+1,high);
}
 
void printArray(int A[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
int main()
{
    int A[]={45,23,78,45,78,90};
    int n=6;
    quick_sort(A,0,n-1);
 
    cout << "Sorted array: \n";
    printArray(A,n);
 
    return 0;
}