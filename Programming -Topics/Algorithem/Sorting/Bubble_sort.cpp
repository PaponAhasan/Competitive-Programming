#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int array[]={45,23,78,45,78,90};
 
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
 
    for(int i=0;i<6;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}