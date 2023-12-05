#include <iostream>
using namespace std;
//push()
//pop()
//empty()
//size()
//top()
//emplace
//swap()
#include <stack>
int main() {
	stack<int> s;//declaration of stack
	s.push(21);
	s.push(22);
	s.push(24);
	s.push(25);
	s.pop();
	s.pop();	
	cout<<"size of stack is "<<s.size()<<endl;
	
	while (!s.empty()) {//print stack element and pop() one by one
		cout << s.top() <<" ";
		s.pop();
	}
	return 0;
}
