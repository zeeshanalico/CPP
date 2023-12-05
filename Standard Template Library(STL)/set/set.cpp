#include<iostream>
#include<set>
using namespace std;
//	Storing order – The set stores the elements in sorted order.
//Values Characteristics – All the elements in a set have unique values.
//Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
//Search Technique – Sets follow the Binary search tree implementation.
//Arranging order – The values in a set are unindexed
//insert()
//begin()
//end()
//rbegin()
//rend()
//clear()
//size()
 
int main(){
//	set<int> s={1,1,1,45,5};
	set<int> s;//it stores the elements in sorted way
	s.insert(23);
	s.insert(34);
	s.insert(24);
	s.insert(24);	
	s.insert(24);
//	s.clear();
	set<int>::iterator it;
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
	cout<<s.size();
//	cout<<s[1]<<endl;	//error//random accecss is impossible in set
	// for(auto element:s){
	// 	cout<<element<<" ";
	// }
}