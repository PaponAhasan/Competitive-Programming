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

void Create(int key){
	struct Node *t,*last;
	 t = new Node;
	 t->data = key;
	 t->next = NULL;
	 
	 if(first == NULL){
	 	first = last = t;
	 }
	 else {
	 	last->next = t;
	 	last = t;
	 }
}

int Count(struct Node *p){
	int cnt = 0;
	while(p!=NULL){
		cnt++;
		p = p->next;
	}
	return cnt;
}

void RecursiveReverse(struct Node *q,struct Node *p){
	if(p!=NULL){
		RecursiveReverse(p,p->next);
		p->next = q;
	}
	else{
		first = q; 
	}
}
//sliding pointer
void ThreePointerReverse(struct Node *p){
	struct Node *r = NULL,*q = NULL;
	 //p = first;
	while(p!=NULL){
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

// 0(n)
void Reversing(struct Node *p){
	p = first;
	int *ar = new int,i = 0;
	while(p!=NULL){
		ar[i] = p->data;
		p = p->next;
		i++;
	}
	
	p = first,i--;
	while(p!=NULL){
		p->data = ar[i];
		p = p->next;
		i--;
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Create(x); // 1 2 3 4 5
	}
	
	Reversing(first);
	display(first); // 5 4 3 2 1
	
	ThreePointerReverse(first);
	display(first); // 1 2 3 4 5
	
	RecursiveReverse(NULL,first);
	display(first); // 5 4 3 2 1
	
}