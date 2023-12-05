
// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int N, int key)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == key)
			return i;
		else
			return -1;
}
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int key = 10;
	int N = sizeof(arr) / sizeof(arr[0]);//size of array

	
	int result = search(arr, N, key);
	
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
