#include<iostream>
#include<unordered_map>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int main(){
//	unordered_map<int,int> mp;
//	mp[3]=4;
//	mp[43]=34;
//	cout<<mp[43];
//	
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include<vector>
//typedef vector<int> vi;
//#define rep(i,a,b) for(int i=a;i<b;i++)
#include<map>
//The typedef is a keyword that is used in C programming to provide existing data types with a new name. typedef keyword is used to redefine the name already the existing name
int main(){
	int arr[10]={1,1,1,2,2,3,3,4,6,7};
	map<int, int> freq;
	 for(int i=0;i<10;i++){
		freq[arr[i]]++;
	}
	map<int,int>::iterator it;
	for(it=freq.begin();it!=freq.end();it++){
//		cout<<it->first<<" "<<it->second<<endl;
		cout<<it->first<<" is repeated "<<it->second<<" times."<<endl;

	}
	
	return 0;
}
