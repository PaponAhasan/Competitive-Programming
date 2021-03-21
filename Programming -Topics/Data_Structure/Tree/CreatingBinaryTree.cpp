#include"bits/stdc++.h"
using namespace std;

struct Node{
	struct Node *Lchild;
	int data;
	struct Node *Rchild;
};

struct Queue{
	int size;
	int front;
	int rear;
	Node **Q;
};

void create(struct Queue *q,int size){
	q->size = size;
	q->front = q->rear = 0;
	q->Q = (Node **)malloc(q->size*sizeof(Node *));
}

void enqueue(struct Queue *q , Node *x){
	if((q->rear+1)%q->size == q->front)
	    printf("Queue is Full\n");
	else{
		q->rear = (q->rear+1)%q->size;
		q->Q[q->rear] = x;
	}
}

Node * dequeue(struct Queue *q){
	Node* x = NULL;
	
	if(q->front == q->rear)
	   printf("Queue is Empty\n");
	else{
	   q->front = (q->front+1)%q->size;	
	   x = q->Q[q->front];
	} 
	return x;  
}

int isEmpty(struct Queue q){
	return q.front = q.rear;
}
