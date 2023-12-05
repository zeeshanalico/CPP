#include<iostream>
using namespace std;
int main(){
	int option;
	do{
		cout<<"What operation do you want to perform? Select option number. "<<endl;
		cout<<"Enter 0 to Exit."<<endl;
		cout<<"1. "<<endl;
		cout<<"2. "<<endl;
		cout<<"3. "<<endl;
		cout<<"4. "<<endl;
		cout<<"5. "<<endl;
		cout<<"6. "<<endl;
		cout<<"7. "<<endl;
		cout<<"8. Clear Screen"<<endl<<endl;
		
		cin>>option;
		switch(option){
			case 0: cout<<" "<<		<<endl; break;
			case 1: cout<<" "<<		<<endl; break;
			case 2: cout<<" "<<		<<endl; break;
			case 3: cout<<" "<<		<<endl; break;
			case 4: cout<<" "<<		<<endl; break;
			case 5: cout<<" "<<		<<endl; break;
			case 6: cout<<" "<<		<<endl; break;
			case 7: cout<<" "<<		<<endl; break;
			
			case 8: system("cls"); break;
			
			default: cout<<"Enter proper option."<<endl;
		}
	}while(option!=0){
		return 0;
	}
	
	
	
	
	return 0;
}