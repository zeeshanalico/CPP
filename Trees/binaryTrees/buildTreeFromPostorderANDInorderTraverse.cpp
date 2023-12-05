#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
int search(int inorder[],int start, int end, int current){
	for(int i=start;i<=end;i++){
		if(inorder[i]==current){
			return i;
		}
	}
	return -1;
}
Node* buildTree(int postorder[], int inorder[],int start,int end){
	static int idx=4;
	
	if(start>end){return NULL;}
	
	int current=postorder[idx];
	idx--;//postorder is opposite of the preorder
	Node* n=new Node(current);
	
	if(start==end){return n;}//if inorder has only one element
	
	int pos=search(inorder,start,end,current);
	n->right=buildTree(postorder,inorder,pos+1,end);
	n->left=buildTree(postorder,inorder,start,pos-1);
	return n;
}
void inorderPrint(Node* root){
	if(root==NULL){return;}
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}
int main(){
	int postorder[]={4,2,5,3,1};
	int inorder[]={4,2,1,5,3};
	
	Node* root=buildTree(postorder,inorder,0,4);
	inorderPrint(root);
	return 0;
	
}