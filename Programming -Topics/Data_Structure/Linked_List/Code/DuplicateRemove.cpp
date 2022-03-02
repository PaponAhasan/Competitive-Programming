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

void RemoveDuplicates(struct Node *p){
	struct Node *q = p->next;
	while(q!=NULL){
		if(q->data != p->data){
			p = q;
			q = q->next;
		}
		else{
			p->next = q->next;
		    free(q);
		    q = p->next;
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Create(x);
	}
	
	RemoveDuplicates(first);
	display(first);
	
}