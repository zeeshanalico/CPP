#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int val){
		data = val;
		next = NULL;
	}
};
void insertAtHead(node *&head, int val)
{
	node *n = new node(val); // it will create a node in the dynamic memory and val store in 'n';
	n->next = head;
	head = n;
}
void insertAtTail(node *&head, int val)
{
	node *n = new node(val); // we make a new node 'n' of value 'val' and pointer 'NULL' coming from class node.

	if (head == NULL)	// check: if we don't have any node in linkedlist then we will store it in head
	{
		head = n;
		return;
	}
	// make an iterator to traverse from head to tail
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
bool search(node *head, int key)
{
	node *temp = head;
	while (temp != NULL)
	{
		if (temp->data == key){return true;}
		temp = temp->next;
	}
	return false;
}
void deleteHead(node *&head)
{
	node *todelete = head;

	head = head->next; // we forward the head from 1 to 2nd pos
	delete todelete;
}
void Delete(node *&head, int val)
{
	// check: if we have empty node
	if (head == NULL)
	{	
		cout<<"list is null"<<endl;
		return;
	}
	// check: if we have only one head
	if (head->next == NULL)
	{
		deleteHead(head);
		return;
	}

	node *temp = head;
	while (temp->next->data != val)
	{
		temp = temp->next;
	}
	node *todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}
node *reverse(node *&head)
{
	node *prevptr = NULL;
	node *currptr = head;
	node *nextptr;

	while (currptr != NULL)
	{
		nextptr = currptr->next;
		currptr->next = prevptr; // break linking to next and create with prev

		prevptr = currptr;
		currptr = nextptr;
	}
	return prevptr;
}
node *reverseRecursive(node *&head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	node *newnode = reverseRecursive(head->next);

	head->next->next = head;
	head->next = NULL;
	return newnode;
}
bool detectCycle(node *&head)
{
	node *slow = head;
	node *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			return true;
		}
	}
	return false;
}
void display(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	display(head);
	// node *rev = reverseRecursive(head);
	// display(rev);
	//	display(head);
	//	insertAtHead(head,4);
	//	cout<<search(head,3);
}