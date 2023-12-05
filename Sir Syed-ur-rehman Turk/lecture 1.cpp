#include<iostream>
using namespace std;
int main(){
	
	while(1){
		cout<<"press 0 to Exit : "<<endl;
		cout<<"press 1 to insert element into array : "<<endl;
		cout<<"press 2 to Search element into array : "<<endl;
		cout<<"press 3 to Delete element into array : "<<endl;
		cout<<"press 4 to Print All element into array : "<<endl;
		
		char c=_getche();
		switch(c - 48){	
			case 0: cout<<"Enter an integer to insert : ";
			cin>>X;
			result=Arr.insert(X);
			if(result==true){
				cout<<"Element "<<Z<<" was inserted Successfully."<<endl;
			}
			else{
				cout<<"Element "<<Z<<" was Not inserted due to fullness."<<endl;
			}
			break;
		}
	}
	
	
	
	
	return 0;
}