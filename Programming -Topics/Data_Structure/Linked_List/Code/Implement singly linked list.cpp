#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

Node* head = NULL; 

void Insert(int num){
    Node *new_node = new Node();
    new_node -> data= num;
    new_node -> next= head;
    head=new_node;
}

Inpute:
3 
1 2 3
Output:
3 2 1 

void printList(Node* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	} 
} 

int main() 
{ 
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        Insert(x);
    }
	printList(head); 

	return 0; 
} 
