#include <iostream>
using namespace std;
union money{
	int paisa;
	float dollar;
	char currency;
};
int main(){
//	you can only use 1 data member of a union for an object
	union money n,m,o;
	n.paisa=100;
	m.dollar=225.01;
	o.currency='$';
	cout<<n.paisa<<endl;
	cout<<m.dollar<<endl;
	cout<<o.currency<<endl;
	
	enum Meal{breakfast,lunch,dinner};//0 1 2
	Meal m1=lunch;//1=1
	cout<<m1<<endl;//1
	cout<<breakfast;//0
	return 0;
}