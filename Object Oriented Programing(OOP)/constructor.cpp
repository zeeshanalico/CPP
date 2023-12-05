#include<iostream>
using namespace std;
//if we make a parameterized constructor and  parameterized object after that we make default object then we have to make default constructor also.

//	what is deep copy & what is shallow copy

class student{
	public:
		string name;
		int age;
		bool gender;
		
	//constructor
	student(){cout<<"default constructor";}
	
	student(string s,int a, bool g){
		cout<<"parameterized constructor ";
		name=s;
		age=a;
		gender=g;
	}
	
	student(student &a){
		cout<<"copy constructor";
		name=a.name;
		age=a.age;
		gender=a.gender;
		
	}
	//Destructor
	~student(){
		cout<<"destructor called"<<endl;
	}
	
	//getter
	string getName(){return name;}
	int getAge(){ return age;}
	bool getGender(){return gender;}
};

int main(){
	student a("ali",18,1);//parameterized constructor
	
	cout<<a.getName()<<endl;
	cout<<a.getAge()<<endl;
	cout<<a.getGender()<<endl<<endl;
	
	student b;//default constructor
	cout<<endl<<endl;
	
	student c=a;//copy constructor
	cout<<endl;
	


	return 0;
}