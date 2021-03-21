#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main() {

	node *first=NULL;
	node *second=NULL;

	first=new node();
	second=new node();

	cin>>first->data;
	first->next=second;

	cin>>second->data;
	second->next=NULL;

	cout<<first->data+second->data;
	return 0;
}
