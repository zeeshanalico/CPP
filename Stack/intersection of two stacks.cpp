#include<iostream>
#include<stack>
using namespace std;
// Function to find intersection
void intersection(int a[], int b[], int n, int m)
{
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (a[i] > b[j]) {
			j++;
		}
		else if (b[j] > a[i]) {
			i++;
		}
		else {

			// when both are equal
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
}
int main(){
	stack<int> st1;
	stack<int> st2;
	
	st1.push(8);
	st1.push(7);
	st1.push(6);
	st1.push(5);
	st1.push(4);
	st1.push(3);
	st1.push(2);
	st1.push(1);
	
	st2.push(76);
	st2.push(89);
	st2.push(62);
	st2.push(60);
	st2.push(24);
	st2.push(6);
	st2.push(2);
	st2.push(1);
	st2.push(62);
	st2.push(5);
	//storing both stack in two arrays
	int arr1[st1.size()],	arr2[st2.size()];
		int i=0;
		while(!st1.empty()){
		arr1[i]=st1.top();	st1.pop();
		i++;
		}
		i=0;
		while(!st2.empty()){
		arr2[i]=st2.top();	st2.pop();
		i++;
		}
		//intersection of two array
	for(int a=0;a<sizeof(arr1)/sizeof(arr1[0]);a++){
		cout<<arr1[a]<<"    ";
	}cout<<endl;
		for(int a=0;a<sizeof(arr2)/sizeof(arr2[0]);a++){
		cout<<arr2[a]<<"   ";
	}
	cout<<endl<<"THE COMMON ELEMENTS ARE : ";
		for(int a=0;a<sizeof(arr1)/sizeof(arr1[0]);a++){
				for(int b=0;b<sizeof(arr2)/sizeof(arr2[0]);b++){
					if(arr1[a]==arr2[b]){
//						cout<<arr1[a]<<" ";
						st1.push(arr1[a]);
					}
				}
		}
		cout<<endl;
	while(!st1.empty()){
		cout<<st1.top()<<" "; st1.pop();
	}
		intersection(arr1,arr2,st1.size(),st2.size());
	return 0;
}