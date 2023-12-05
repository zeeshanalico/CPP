#include<iostream>
//#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};
void displayHead(Node *n){
	cout<<n->data<<"->";
}

void display(Node *n){
	while(n!=NULL){
		cout<<n->data<<"->";
		n=n->next;//this is the increment in node
		
	}
}
void displayAddress(Node *n){
	while(n!=NULL){
		cout<<n->next<<"->";
		n=n->next;//this is the increment in node
		
	}
}
int main()
{

	// allocate 3 nodes in the heap but here we don't allocate value just making 3 nodes
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with the second node

	second->data = 2;
	second->next = third;

	third->data = 3; // assign data to third node
	third->next = NULL;
	
	//	printing the node values
//	cout<<head->data<<"->";
//	cout<<second->data<<"->";
//	cout<<third->data;
	
	//if we want to print value thorough function then call display function
//	displayHead(head);
	
	display(head); 
	
	cout<<endl;
	
	displayAddress(head);
	
	/*Note that only the head is sufficient to represent
	the whole list. We can traverse the complete
	list by following the next pointers. */

	return 0;
}