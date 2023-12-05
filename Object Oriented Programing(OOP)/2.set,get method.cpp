#include<iostream>
using namespace std;
class student{
	string name;//we can access private data members of class using setter; we make a public setter/function and set the val of private Data member through public fuction
	
	public:
	int age;
	bool gender;
	
	void setName(string n){name=n;}
	void setAge(int n){age=n;}
	void setGender(bool n){gender=n;}

	string getname(){return name;}
	int getAge(){return age;}
		bool getGender(){return gender;}

};

int main(){
	student a;
	a.setName("ali");
	a.setAge(18);
	a.setGender(1);
	cout<<a.getname()<<endl;
	cout<<a.getAge()<<endl;
	cout<<a.getGender();
	
	
	return 0;
}