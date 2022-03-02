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

// 0(1)
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

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		InsertLast(x);
	}
	display(first);
}