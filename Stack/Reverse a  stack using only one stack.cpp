#include<iostream>
#include<stack>
using namespace std;
//reverse the element using one stack.

void insertAtBottom(stack<int> &st, int ele){
		if(st.empty()){
		st.push(ele);
		return;
	}
	int topele=st.top();
	st.pop();
	insertAtBottom(st,ele);
	
	st.push(topele);
}

void reverse(stack<int> &st){
	if(st.empty()){
		return;
	}
	int ele=st.top();
	st.pop();
	reverse(st);//recursion
	
	insertAtBottom(st,ele);
}

int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	
	reverse(st);
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}	
	return 0;
}