#include<iostream>
using namespace std;
//The functions associated with stack are: 
//empty() – Returns whether the stack is empty – Time Complexity : O(1) 
//size() – Returns the size of the stack – Time Complexity : O(1) 
//top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
//push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
//pop() – Deletes the top most element of the stack – Time Complexity : O(1) 

/*Whenever an object is created, it's always stored in the Heap space and stack memory contains 
the reference to it. Stack memory only contains local primitive variables and
 reference variables(pointers) to objects in heap space.*/
#define n 100
class stack{
	int* arr;//Pointer is allocated on the stack and the object it is pointing to is allocated on the heap.
	int top;
	public:
		stack(){
			arr=new int[n];
			top=-1;//here top is used as index number
		}	
		
	void push(int x){
		if(top==n-1){//check stack is full or not
			cout<<"Stack overflow";
		}
		else{
		top++;
		arr[top]=x;
		}
	}
	void pop(){
		
		if(top==-1){//check stack is empty or not
			cout<<"no element to pop"<<endl;
			return;
		}
		else top--;
	}
	int Top(){
		if(top==-1){
			cout<<"no element to Stack/underflow"<<endl;
			return -1;
		}
		return arr[top];
	}
	bool empty(){
		return top==-1;
	}
	int size(){
		return top+1;
	}
};

int main(){
	
	stack st;
	st.push(1);	
	st.push(2);
	st.push(3);
	st.push(4);
	cout<<st.empty()<<endl;// if empty it will return 1
	cout<<"size of stack is : "<<st.size();
	//	cout<<st.Top();
	st.peek(3);
	
	 //system("cls");//clear the screen
	return 0;
}