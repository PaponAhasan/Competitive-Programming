#include<iostream>
using namespace std;
 
int Binary_search(int A[],int n,int item)
{
    int first=0,last=n-1;
 
    while(first<=last)
    {
        int mid=(first+last)/2;
 
        if(A[mid]==item)
        {
            return mid;
        }
        else if(A[mid]>item)
        {
            last=mid-1;
        }
        else if(A[mid]<item)
        {
            first=mid+1;
        }
    }
    return -1;
}
 
int main()
{
    int n,item;
    cin>>n;
    int arr[n];
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>item;
 
    int loc=Binary_search(arr,n,item);
 
    if(loc==-1){
        cout<<"Element is not present in array"<<endl;
    }
    else cout<<"Element is present at index "<<loc+1<<endl;
}