#include<iostream>
using namespace std;
int main(){
	int	n=5;
	int arr[n]={2,6,6,1,23};
	
	for(int i=0;i<n-1;i++){
		for(int j=1;j<n;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}	
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}