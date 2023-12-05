#include<iostream>
using namespace std;
#define n 20
class Queue{
	int *arr;
	int front;
	int back;
	
	public:
	Queue(){
		arr=new int[n];
		back=-1;
		front=-1;
	}
	bool empty(){
		if(front==-1 || front>back){//if front =-1 and back =-1
			return true;
		}
			else false;
	}
	void enqueue(int x){
		if(front==0 && back==n-1){
			cout<<"queue overflow"<<endl;
			return;
		}
		else{
			back++;
			arr[back]=x;
		}
		if(front==-1){
			front++;
		}
	}
	void dequeue(){
		if(empty()){
			cout<<"queue is Empty"<<endl;
			return;
		}
		else{
			front++;
		}
	}
	int peek(){
		if(front==-1 || front>back){
			cout<<"queue is Empty"<<endl;
			return -1;
		}
		else{
		return arr[front];
		}
	}
};

int main(){
	
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
		cout<<q.peek()<<endl;
	q.dequeue();
		cout<<q.peek()<<endl;
		cout<<q.empty()<<endl;

	
	return 0;	
}