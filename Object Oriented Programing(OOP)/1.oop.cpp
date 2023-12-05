#include<iostream>
using namespace std;
class student{
	//Data members are private by Default
	public:
	string name;
	int age;
	string gender;
	
	void displayInfo(){
		cout<<"Name : "<<name<<endl;
		cout<<"age : "<<age<<endl;
		cout<<"gender : "<<gender<<endl;
	}
	
};

int main(){
	
	student info[3];//arr is object of class student// there is 3 objects
	
	for(int i =0; i<3;i++){
		cout<<"Enter name"<<" ";	cin>>info[i].name;
		cout<<"Enter age"<<" ";		cin>>info[i].age;
		cout<<"Enter gender"<<" ";	cin>>info[i].gender;

	}
//		for(int i=0;i<3;i++){
//		cout<<"Enter name :  "<<info[i].name<<endl;
//		cout<<"Enter age:  "<<info[i].age<<endl;
//		cout<<"Enter gender :  "<<info[i].gender<<endl;
//	}
	
	for(int i=0;i<3;i++){
		info[i].displayInfo();
	}
	
	
	return 0;
}