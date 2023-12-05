#include<iostream>
using namespace std;
struct node{
	
	int data;
	node* left,*right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
node* insertBST(node* root,int val){
	if(root==NULL) {return new node(val);}//termination of recursion
	if(val < root->data){
		root->left=insertBST(root->left,val);}
	else{//val > root->data 
		root->right=insertBST(root->right,val);}
	return root;
}
void inorderPrint(struct node* root){
	if(root==NULL){return;	}//termination of recursion
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}
node* searchInBST(node* root,int key){
	if(root==NULL){return NULL;}//if key not found then this will be termination statement
	if(root->data==key){return root;}//if key found then this will be termination statement
	if(root->data>key){
		return searchInBST(root->left,key);}
	else//	data<key
	return searchInBST(root->right,key);
	
}
#include<cstdlib>
node* inorderSuccessor(node* root){
	node* curr=root;
	while(curr && curr->left != NULL){
		curr=curr->left;
	}
	return curr;
}
node* deleteBST(node* root, int val){
	if(root==NULL){return root;}
	if(val < root->data){
		root->left=deleteBST(root->left,val);}
	else if(val > root->data){	
		root->right=deleteBST(root->right,val);}
	else{
		if (root->left == NULL and root->right == NULL){
            return NULL;
		}
		else if(root->left==NULL){
			node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			node* temp=root->left;
			free(root);
			return temp;
		}
		node* temp=inorderSuccessor(root->right);
		root->data=temp->data;
		root->right=deleteBST(root->right,temp->data);
	}
	return root;
}
//check for BST
bool isBST(node* root,node* min=NULL,node* max=NULL){
	if(root==NULL){return true;}
	if(min!=NULL && root->data <= min->data){
		return false;
	}
	if(max!=NULL && root->data >= max->data){
		return false;
	}

	bool leftValid=isBST(root->left,min,root);
	bool rightValid=isBST(root->right,root,max);
	return leftValid and rightValid;

}
int main(){
	
	node* root=NULL;
		root=insertBST(root,5);
		root=insertBST(root,1);
		root=insertBST(root,3);
		root=insertBST(root,4);
		root=insertBST(root,2);
		root=insertBST(root,7);	
		inorderPrint(root);

// if we use inorderPrint on BST then the output must be sorted in ascending order
/*			5
           / \
		  1   7
		   \
		    3
		   / \
		  2   4 			*/
		
		if(searchInBST(root,6)==NULL)
			cout<<endl<<"key doesn't exist "<<endl;
		else
		cout<<endl<<"key exist";

		deleteBST(root,1);
		inorderPrint(root);

		node* root1=new node(1);
		root1->left=new node(2);
		root1->right=new node(3);
		

		if(isBST(root,NULL,NULL)){
			cout<<endl<<"BST is valid";
		}
		else 
			cout<<endl<<"BST is invalid";
	
	return 0;
}