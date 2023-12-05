#include<iostream>
using namespace std;
// we can construct tree from preorder and postorder if it is complete binary tree otherwise not
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
Node* buildTree(int preorder[], int inorder[],int start,int end){
	static int idx=0;
	
	if(start>end){return NULL;}
	
	int current=preorder[idx];
	idx++;
	Node* n=new Node(current);
	
	if(start==end){return n;}//if inorder has only one element
	
	int pos=search(inorder,start,end,current);
	n->left=buildTree(preorder,inorder,start,pos-1);
	n->right=buildTree(preorder,inorder,pos+1,end);
	return n;
}
void inorderPrint(Node* root){
	if(root==NULL){return;}
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}
int main(){
	int preorder[]={1,2,4,3,5};
	int inorder[]={4,2,1,3,5};
	
	Node* root=buildTree(preorder,inorder,0,4);
	inorderPrint(root);
	return 0;
	
}