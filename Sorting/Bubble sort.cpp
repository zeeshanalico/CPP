	#include<iostream>
	using namespace std;
	//bubble sort
	int main(){
		int arr[6]={12,45,23,51,19,8};
		
		for(int i=0;i<6;i++){
			for(int j=0;j<6-i-1;j++){
				if(arr[j] > arr[j+1]){
					//swaping
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		for(int i=0;i<6;i++){
			cout<<arr[i]<<" ";
		}
	}