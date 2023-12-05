#include<iostream>
using namespace std;

	
int main(){
//	int size;
//	cout<<"enter the size of array: ";	cin>>size;
//	int arr[4];
//	cout<<"enter the elements of array "<<endl;
//	for(int i=0;i<size ;i++){
//		cin>>arr[i];
//	}
//	cout<<"The output is: ";
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////	
//insertAt
/*
	int size=5;
	int arr1[size]={4,56,34,3,56};
	int pos;//where you want to insert element
	cout<<"enter position : ";	cin>>pos;
	int num;//element that you want to insert
	cout<<"enter num/element that you want to insert : ";	cin>>num;
	
	if(pos<=0 || pos>size+1){
		cout<<"invalid position.";
	}
	else
	{
		for(int i=size-1;i>=pos-1;i--){	arr1[i+1]=arr1[i]; }
			arr1[pos-1]=num;
			size++;
		for(int i=0;i<size;i++){ cout<<arr1[i]<<" "; }
	}
	*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	//if you have unsorted array then you just shift the pos element at the last index and insert newele at pos 
	//alogrithm is
//	a[size]=a[pos-1];
//	a[pos-1]=num;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////	
//deleteAt

	int size=7;
	int a[size]={33,65,4,7,43,754,52};
	int pos;//where you want to delete element
	cout<<"enter position : ";	cin>>pos;
//	int item=a[pos-1];//it will store the deleted element
	if(pos<=0 || pos>size ){
		cout<<" invalid position.";
	}
	else{
	 for(int i=pos-1;i<size-1;i++){	a[i]=a[i+1]; }
	 size--;//it will not decrease the size of array but decrease the value of size var so when we print arr it will print upto size-1;
	}
	for(int i=0;i<size;i++){cout<<a[i]<<" ";}
	cout<<endl<<" the size of array is : "<<sizeof(a)/sizeof(a[0]);
	
	
}