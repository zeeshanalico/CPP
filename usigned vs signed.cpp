#include<iostream>
using namespace std;
/*
int main(){
//	whenever we store -1 in unsigned type it will store its two's compliment


//0000 0000 0000 0000 0000 0000 0000 0001	=	1
//1111 1111 1111 1111 1111 1111 1111 1110
//									   +1
//________________________________________
//1111 1111 1111 1111 1111 1111 1111 1111	=	4294967295

	unsigned int num=-1;
	int x=num;
	cout<<num<<" , "<<x;
	
	
	
	return 0;
}
*/
int main(){
	int x=5,n=3;
	x<<=4;//x = x<<4;
	x>>=n;
	cout<<x;


	return 0;
}