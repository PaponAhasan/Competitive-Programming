#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int array[]={45,23,78,45,78,90};
    int i,j,item;
 
    for(i=1;i<6;i++){
 
        item=array[i];  /// 2
        j=i-1;    /// 1
 
        while( j>=0 && array[j]>item){
        //for(j=i-1; j>=0 && array[j]>item ;j--){
 
            array[j+1]=array[j];
            j=j-1;
        }
 
        array[j+1]=item;
    }
 
     for( i=0;i<6;i++){
        cout<<array[i]<<" ";
    }
}