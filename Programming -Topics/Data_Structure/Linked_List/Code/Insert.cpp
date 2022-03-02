#include"bits/stdc++.h"
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
	struct Node *t,*last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i=1;i<n;i++){
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}

void display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";
}

//0(1)
void HeadInsert(struct Node *p,int key){
	struct Node *q = new Node;
	q->data = key;
	q ->next = first;
	first = q;	
}

// 0(n)
void TailInsert(struct Node *p,int key,int pos){
	 struct Node *q = new Node;
	 q->data = key;
	 for(int i=1;i<pos;i++){
	 	p = p->next;
	 }
	 q->next = NULL;
	 p->next = q;
}

// 0(n)
void PositionInsert(struct Node *p,int key ,int pos){
	 struct Node *q = new Node;
	 q->data = key;
	 for(int i=1;i<pos;i++){
	 	p = p->next;
	 }
	 q->next = p->next;
	 p->next = q;
}

int main(){
	int A[] = {3,5,7,8,3};
	create(A,5);
	display(first);
	
	int key = 10;
	HeadInsert(first,key);
	display(first); // 10,3,5,7,8,3
	
	key = 11;
	int pos = 6;
	TailInsert(first,key,pos);
	display(first); // 10,3,5,7,8,3,11
	
	key = 12;
	int Pos = 4;
	PositionInsert(first,key,Pos);
	display(first); // 10,3,5,7,12,8,3,11
}