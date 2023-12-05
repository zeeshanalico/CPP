#include<iostream>
#include<list>
using namespace std;
void display(list<int>& li){
	list<int>::iterator it;
	for(it=li.begin();it!=li.end();it++){
		cout<<*it<<" ";
	}
}
int main(){
	list<int> li;
	li.push_back(3);
	li.push_back(4);
	li.push_back(7);
	li.push_back(9);
	li.push_back(8);
	li.push_back(1);
	li.push_back(1);
	
	li.push_front(12);
	li.pop_back();
//	li.pop_front();
	
	display(li);
	
	cout<<endl<<li.front()<<" "<<li.back();
	
	
	return 0;
}