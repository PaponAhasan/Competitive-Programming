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

void InsertLast(int key){
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

void InsertsortList(struct Node *p,int key){
	
	struct Node *x,*y;
	x = new Node;
	x->data = key;
	y = NULL;
	if(first == NULL){
		first = x;
	}
	else if(key <= p->data){
		x->next = first;
		first = x;
	}
	else{
		while(p!=NULL and key>p->data){
			y = p;
			p = p->next;
		}
		x->next = y->next;
		y->next = x;
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		InsertLast(x);
	}
	display(first);
	int key = 7;
	InsertsortList(first,key);
	display(first);
	
}