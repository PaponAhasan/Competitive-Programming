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

void Display(struct Node *h){
	do{
		printf("%d ",h->data);
		h = h->next;
	}while(h!=Head);
	printf("\n"); 
}

int DeletePosition(struct Node *p,int pos){
	struct Node *q;
	if(pos<=0 or pos>Length(Head)){
		puts("Position is Invalid");
		return -1;
	}
	if(pos == 1){
		while(p->next!=Head) p = p->next;
		if(Head==p){
			free(Head);
			Head = NULL;
		}
		else{
		    p->next = Head->next;
			free(Head);
			Head = p->next;	
		}
	}
	else{
		for(int i=0;i<pos-2;i++){
			p = p->next;
		}
		q = p->next;
		p->next = q->next;
		free(q);
	}
}
	
void DeleteItem(struct Node *p,int x){
	struct Node *q;
	p = Head;
	if(x == p->data){
		while(p->next != Head) p = p->next;
		if(Head == p){
			free(Head);
			Head = NULL;
		}
		p->next = Head->next; 
		x = Head->data; //Delete data(Pre Head)
		delete Head; 
		Head = p->next;
	}
	else{
		for(int i=0;i<Length(Head);i++){
			p = p->next;
			if(p->data == x){
			    q->next = p->next;
			}
			q = p;
		}
	}
}

int main(){
    int A[] = {2,3,4,5,6};
	create(A,5);
	//DeleteItem(Head,6);
	DeletePosition(Head,0);
	Display(Head);	
}
