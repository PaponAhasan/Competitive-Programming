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

struct Node* MoveToHead(struct Node *p,int key){
	struct Node *q = NULL;
	while(p!=NULL){
		if(key==p->data){
		   q->next = p->next;
		   p->next = first;
		   first = p;
		   return p;
		}
		q = p;
		p = p->next;
	}
	return NULL;
}

int main(){
	int A[] = {3,5,7,8,3};
	create(A,5);
	display(first);
	
	int key = 7;
	struct Node *temp = MoveToHead(first,key);
	if(temp){
		cout<<"Key is Found :"<<temp->data<<"\n";
	}
	else cout<<"Key is Not Found"<<"\n";
	display(first);
}