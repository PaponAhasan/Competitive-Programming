#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int array[]={45,23,78,45,78,90};
 
    int int_min;
    for(int i=0;i<6-1;i++){
        int_min=i;
 
        for(int j=i+1;j<6;j++){
            if(array[j]<array[int_min]){
                int_min=j;
            }
        }
        if(int_min!=i){
            int temp=array[int_min];
            array[int_min]=array[i];
            array[i]=temp;
        }
    }
 
 
     for( int i=0;i<6;i++){
        cout<<array[i]<<" ";
    }
}