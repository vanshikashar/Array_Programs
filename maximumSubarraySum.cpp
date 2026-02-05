#include<iostream>
using namespace std;

int main(){
	int arr[100], n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int currentSum= arr[0];
	int maxSum= arr[0];
	
	for(int i=1; i<n; i++){
		currentSum= max(arr[i], currentSum+ arr[i]);
		maxSum= max(maxSum, currentSum);
	}
	
	cout<< "Maximum subarray sum: "<< maxSum;
	
	return 0;
}
