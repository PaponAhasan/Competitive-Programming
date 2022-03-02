#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void printList(node *n){
    node *num=NULL;
    num=new node();
    while(n!=NULL){
        num->data+=n->data;
        n=n->next;
    }
    cout<<num->data;
}
int main() {
	node *first=NULL;
	node *second=NULL;

	first=new node();
	second=new node();

	cin>>first->data;
	first->next=second;

	cin>>second->data;
	second->next=NULL;

	printList(first);
	return 0;
}
