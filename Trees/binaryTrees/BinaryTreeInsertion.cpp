#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(){}	
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
struct Node* insert(int val){
	Node* n=new Node();
	n->data=val;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void preorder(Node* root){
	if(root==NULL){return;}
	preorder(root->left);
	preorder(root->right);
	cout<<root->data<<" ";
}
int main(){
	struct Node *root=insert(1);
	struct Node *n1=insert(2);
	struct Node *n2=insert(3);
	root->left=n1;
	root->right=n2;
	preorder(root);
	return 0;
}