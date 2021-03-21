#include"bits/stdc++.h"
using namespace std;
int n;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";
}


void Insert(struct Node *p,int key,int pos){
	 if(pos<0 or pos>n) return;
	 
	 struct Node *q = new Node;
	 q->data = key;
	 
	 if(pos==0){
	 	q ->next = first;
	    first = q;
	 }
	 else{
	 	for(int i=1;i<pos and p;i++){
		    p = p->next;
		 }
		 q->next = p->next;
		 p->next = q;
	 }
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Insert(first,x,i);
	}
	display(first);
}