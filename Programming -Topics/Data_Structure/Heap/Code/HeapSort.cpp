#include<bits/stdc++.h>
using namespace std;
//Max Heap Assignding Order
//Min Heap Dessignding Order
//nlogn
void Insert(int A[],int n){
   int i = n,temp;	
   temp = A[i];
   
   while(i>1 && temp>A[i/2]){ //Max Heap;
   	  A[i] = A[i/2];
   	  i = i/2;
   }
   A[i] = temp;
}

int Delete(int A[],int n){
	int i,j,Le,De;
	De = A[1];
	Le = A[n];
	A[1] = A[n];
	i = 1; j = i*2;
	
	while(j<n-1){
		if(A[j+1]>A[j]) j = j+1;
		if(A[j]>A[i]){
			swap(A[i],A[j]);
			i = j;
			j = i*2;
		}
		else break;
	}
	A[n] = De;
	return De;
}

int main(){
	int H[] = {0,10,20,30,25,5,40,35};
	for(int i = 2;i<=7;i++){
		Insert(H,i);
	}
	for(int i = 1;i<=7;i++){
		cout<<H[i]<<" ";//40,25,35,10,5,20,30 (Max Heap)
	}
	cout<<"\n";
	
	for(int i = 7;i>=1;i--){
		Delete(H,i); 
	}
	for(int i = 1;i<=7;i++){
		cout<<H[i]<<" "; // Assignding Order Heap Sort
	}
	cout<<"\n";
	
	return 0;
}
