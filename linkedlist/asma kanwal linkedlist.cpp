class Node{
	int data;
	Node *P;
	Node(){
		
	}
}
class linkedlist{
	Node *head;
	linkedlist(){
		head=new Node();
		head->data=null;
		head->p=NULL;
	}
	find();
	insert();
	initialization();
	Removal();
	update();
Addnode(int a){
	Node n=new Node();
	n->setdata();
	n->setnext(NULL);
	if(listobj.size==0){
		headnode->setnext(n);
		PCN=CN;
		CN=n;
	}
	else{
		n->setnext(CN);
		OCN->setnext(n);
		PCN=n;
		
	}
	size++;
}	
};