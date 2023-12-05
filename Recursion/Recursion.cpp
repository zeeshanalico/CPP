#include<iostream>
using namespace std;
	// sum till n=n + n-1 + n-2 ...+ 1
	// sum till n=n + sum till n-1
	// sum till n-1=n-1 + sum till n-2
int sum(int n){
	if(n==0){return 0;}
	int prevSum=sum(n-1);
	return (n+prevSum);
}
int power(int n,int p){
	if(p==0){return 1;}
	int prevPower=power(n,p-1);
	return n*prevPower;
}
int factorial(int n){
	if(n==0){return 1;
	}
	//int prevFactorial=factorial(n-1); return n*prevFactorial;
	return n*factorial(n-1); 
}
int fib(int n){//fibonacci series:0 1 1 2 3 5 8 13... 
	if(n==0||n==1){return n;}
	return fib(n-1)+fib(n-2);
}
/////////////////////////////////check if an array is sorted or not///////////////////////////////////////////////
bool sorted(int arr[],int n){
	if(n==1){return true;}
	bool restArray=sorted(arr+1, n-1);
	return (arr[0]<arr[1] && restArray);//true=1,false=0
}
/////////////////////////////////print number till n in decreasing order/////////////////////////////////////////
void descending(int n){
	if(n==0){return;}	
	cout<<n<<endl;
	descending(n-1);	
	}
int main(){
//	cout<<sum(5);
// 	cout<<power(3,3);
//	cout<<factorial(4);
//	cout<<fib(6);
//	int arr[]={1,2,3,4,5};	cout<<sorted(arr,5)<<endl;
//	descending(4);
	return 0;
}