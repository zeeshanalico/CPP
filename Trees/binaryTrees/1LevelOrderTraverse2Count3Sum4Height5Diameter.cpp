#include<iostream>
using namespace std;
//The only difference between a struct and class in C++ is the default accessibility of member variables and methods. In a struct they are public; in a class they are private
struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
void preorder(struct node* root){
	if(root==NULL){return;}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node* root){
	if(root==NULL){return;}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(struct node* root){
	if(root==NULL){return;}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";	
}
#include<queue>
void levelOrder(node* root){//same as BFS
	if(root==NULL){return;}
	
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node* n=q.front();
		q.pop();
		if(n !=NULL){
			cout<<n->data<<" ";
			if(n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);
		}
		else if(!q.empty()){
			q.push(NULL);
		}	
	}
}
// Problem: Find the sum of nodes at Kth level
int SumofK(struct node* root,int K){
	if(root==NULL){return -1;}
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	int sum=0;
	int level=0;
	
	while(!q.empty()){
		node* n=q.front();
		q.pop();

		if(n!=NULL){
			if(K==level){
				sum+=n->data;//actual sum
			}
			if(n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);
		}
		else if(!q.empty()){
			q.push(NULL);
			level++;
		}
	}
		return sum;
}
//problem: Sum Replacement
void sumReplacement(node* root){
	if(root==NULL){return;}
	sumReplacement(root->left);
	sumReplacement(root->right);

	if(root->left!=NULL){
		root->data+=root->left->data;
	}
	if(root->right!=NULL){
		root->data+=root->right->data;
	}
}
int countNodes(node* root){
	if(root==NULL){
		return 0;
	}
	return countNodes(root->left)+countNodes(root->right)+1;
}

int sumNodes(node* root){
	if(root==NULL){return 0;}
	return root->data+sumNodes(root->left)+sumNodes(root->right);
}
int treeHeight(node* root){
	if(root==NULL){return 0;}
	return max(treeHeight(root->left),treeHeight(root->right))+1;
}
int treeDiameter(node* root){
	if(root==NULL){return 0;}

	int leftHeight=treeHeight(root->left);
	int rightHeight=treeHeight(root->right);
	int currDiameter=leftHeight+rightHeight+1;

	int leftDiameter=treeDiameter(root->left);
	int rightDiameter=treeDiameter(root->right);

	return max(currDiameter,max(leftDiameter,rightDiameter)); 
}
int treeDiameter(node* root, int* height){//optimized version to calculate Diameter of a Tree/Time Complexity O(n)
	if(root==NULL){
		*height=0;
		return 0;
	}

	int lh=0;
	int rh=0;
	int lDiameter=treeDiameter(root->left,&lh);
	int rDiameter=treeDiameter(root->right,&rh);
	int currDiameter=lh+rh+1;
	*height=max(lh,rh)+1;
	return max(currDiameter, max(lDiameter,rDiameter));
}
//FOR each node, the diff b/w height of the left subtree & right subtree <= 1;
//is ka modified bi note ni kiya
#include<cstdlib>
bool isBalanced(node* root){
	if(root==NULL){
		return true;
	}
	if(isBalanced(root->left)==false){
		return false;
	}
	if(isBalanced(root->right)==false){
		return false;
	}
	int leftHeight=treeHeight(root->left);
	int rightHeight=treeHeight(root->right);
	if(abs(leftHeight-rightHeight)<=1){
		return true;
	}
	else return false;
}
int main(){
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	// root->right->left->left=new node(8);
	// root->right->left->left->left=new node(16);
/*
		1
	   / \
	  2   3
	 /\  /\
	4 5 6 7
				*/
	cout<<"Pre-Order : ";		preorder(root);
 	cout<<endl<<"In-Order : ";	inorder(root);
 	cout<<endl<<"Post-Order : "; 	postorder(root);
	cout<<endl<<"Level-Order : ";	levelOrder(root);
 	
	cout<<endl<<"no. of nodes : "<<countNodes(root);
	cout<<endl<<"sum of node values : "<<sumNodes(root);
	cout<<endl<<"sum of kth level : "<<SumofK(root,2);
	cout<<endl<<"Height of Tree is : "<<treeHeight(root);
	cout<<endl<<"Diameter of Tree is : "<<treeDiameter(root);
	int height=0;
	cout<<endl<<"Diameter of Tree is : "<<treeDiameter(root,&height);
	sumReplacement(root);
	cout<<endl<<"Pre-Order after sum replacement : ";		preorder(root);
	cout<<endl<<"tree is balanced or not(1 OR 0)? "<<isBalanced(root);

	return 0;
}