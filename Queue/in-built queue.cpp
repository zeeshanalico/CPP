#include<iostream>
#include<queue>
using namespace std;
//				QUEUE DATA STRUCTURE
// 			-------------------------------------------
//	BACK-->	|			|		|		|		|	  |FRONT-->
//			|			|		|		|		|	  |
// 			-------------------------------------------

void printQueue(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	
}
int main(){
	queue<int> a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	
	cout<<"Size of queue: "<<a.size()<<endl;
	cout<<"front : "<<a.front()<<endl;
	cout<<"back : "<<a.back()<<endl;
	
	
	a.pop();
	
	printQueue(a);
	
	
	
	
	return 0;
}