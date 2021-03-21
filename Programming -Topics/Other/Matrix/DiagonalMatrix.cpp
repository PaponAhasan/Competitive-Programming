//Build Diagonal Matrix
#include <iostream>
using namespace std;

//class Diagonal
//{
	//private :
		//int n;
		//int *A;
	//public :
	  //Diagonal(int n){
	  	//this->n = n;
	  	//A = new int[n];
	  //}
	  //void set(int i,int j,int val);
	  //void get(int i,int j);
	  //void Display();
	  //~Diagonal();
//};

//void Diagonal :: set(int i,int j,int val){
	
//}

struct Matrix{
	int A[10];
	int n;
};

void set(struct Matrix *x,int i,int j,int val){
	if(i==j) x->A[i-1] = val;
}

int get(struct Matrix *x,int i,int j){
	if(i==j) return x->A[i-1];
	else return 0;
}

void display(struct Matrix *x){
	for(int i=1;i<=x->n;i++){
		for(int j=1;j<=x->n;j++){
			if(i==j) cout<<x->A[i-1]<<" ";
			else printf("0 ");
		}
		printf("\n");
	}
}
int main(){
	struct Matrix m;
	m.n = 5;
	for(int i=1;i<=m.n;i++){
		int x;
		cin>>x;
	    set(&m,i,i,x);	
	}
	cout<<get(&m,5,5)<<"\n";  
	display(&m);
}
