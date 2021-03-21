#include<bits/stdc++.h>
using namespace std;

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
	De = A[1]; //copy Delete Element
	Le = A[n]; //Copy Last Eelement 
	A[1] = A[n];//Root(Delete Element) to copy last Element
	i = 1; j = i*2;
	
	while(j<n-1){
		if(A[j+1]>A[j]) j = j+1; // Root Child Compare
		if(A[j]>A[i]){
			swap(A[i],A[j]); // swap root ,greater child Element
			i = j;
			j = i*2;
		}
		else break;
	}
	A[n] = De; // copy Array to Delete Element
	return De; // retrun Delete Element(Root)
}

int main(){
	int H[] = {0,10,20,30,25,5,40,35};
	//40,25,35,10,5,20,30 (Max Heap)
	for(int i = 2;i<=7;i++){
		Insert(H,i);
	}
	for(int i = 1;i<=7;i++){
		cout<<H[i]<<" ";
	}
	cout<<"\n";
	
	//cout<<"Deleted Value is :"<<Delete(H,7)<<'\n';
	//cout<<"Deleted Value is :"<<Delete(H,6)<<'\n';
	for(int i = 7;i>=1;i--){
		Delete(H,i); // Heap Sort
	}
	for(int i = 1;i<=7;i++){
		cout<<H[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}
