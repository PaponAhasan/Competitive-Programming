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

void PositionDelete(struct Node *p,int pos){
	int x;
	struct Node *q = NULL;
	if(pos == 0){
		first = p->next;
	}
	else{
	   for(int i=1;i<pos;i++){
		  q = p;
		  p = p->next;
	  }
	  q->next = p->next;
	  x = p->data;
	  cout<<x<<" Delete Node :"<<"\n";	
	}
}

void Delete(struct Node *p,int key){
	struct Node *q = NULL;
     if(key == p->data){ // Delete First Node
     	first = p->next;
	 }
	 else{
	 	while(p!=NULL){ // Delete Any Postion Node
	 		if(key == p->data){
	 			q->next = p->next;
			 }
			q = p;
	 		p = p->next;
		 }
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
	
	int key = 8;
	Delete(first,key);
	display(first);
	
	int pos = 4;
	PositionDelete(first,pos);
	display(first);
	
}