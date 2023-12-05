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

int main(){
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
/*
	1
   / \
  2   3
			*/
			
	root->left->left=new node(4);
	root->left->right=new node(5);
/*
		1
	   / \
	  2   3
	 / \
	4	5	
				*/
 

	
}