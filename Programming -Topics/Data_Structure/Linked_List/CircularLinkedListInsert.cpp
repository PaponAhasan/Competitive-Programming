#include"bits/stdc++.h"
using namespace std;

struct Node{
	int data;
	struct Node *next;
}*Head;

void create(int A[],int n){
	 struct Node *t,*last;
	 Head = new Node;
	 Head->data = A[0];
	 Head->next = Head;
	 last = Head;
	 
	 for(int i=1;i<n;i++){
	 	t = new Node;
	 	t->data = A[i];
	 	t->next = last->next;
	 	last->next = t; 
	 	last = t; 
	 }
}

int Length(struct Node *p){
	int len = 0;
	do{
		len++;
		p = p->next;
	}while(p!=Head);
	
	return len;
}

void Insert(struct Node *p,int index,int x){
	struct Node *t;
	
	if(index<0 or index>Length(Head)) return;
	if(index == 0){
		t = new Node;
		t->data = x;
		if(Head == NULL){
			Head = t;
			Head->next = Head;
		}
		else{
			while(p->next!=Head) p = p->next;
			p->next = t;
			t->next = Head;
			Head = t;
		}
	}
	else{
		for(int i=0;i<index-1;i++){
			p = p->next;
		}
		t = new Node;
		t->data = x;
		t->next = p->next;
		p->next = t;
	}
}

void Display(struct Node *h){
	do{
		printf("%d ",h->data);
		h = h->next;
	}while(h!=Head);
	printf("\n"); 
}

int main(){
    int A[] = {2,3,4,5,6};
	create(A,5);
	Insert(Head,0,10);
	Display(Head);	
}
