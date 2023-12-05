#include<iostream>
using namespace std;
//insertion Sort
int main(){
	int arr[5]={2,6,6,1,23};
	
	for(int i=1;i<=4;i++){
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current &&j>=0){
			arr[j+1]=arr[j];
			j--;
		}		
		arr[j+1]=current;
	}

	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
	}
}