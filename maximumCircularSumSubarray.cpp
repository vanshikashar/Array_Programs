#include<iostream>
using namespace std;

int kadaneMax(int arr[], int n){
	//kadane's algo for max sybarray sum
	int maxEnding= arr[0];
	int maxSoFar= arr[0];
	
	for(int i=1; i<n; i++){
		maxEnding= max(arr[i], maxEnding+ arr[i]);
		maxSoFar= max(maxSoFar, maxEnding);
	}
	return maxSoFar;
}

//kadane's algo for min subarray sum
int kadaneMin(int arr[], int n){
	int minEnding= arr[0];
	int minSoFar= arr[0];
	
	for(int i=1; i<n; i++){
		minEnding= min(arr[i], minEnding+ arr[i]);
		minSoFar= min(minSoFar, minEnding);
	}
	return minSoFar;
}

int main(){
	int arr[100], n;
	cout<< "Enter number of elements: ";
	cin>> n;
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int maxNormal= kadaneMax(arr, n);
	
	//if all elements are negative
	if(maxNormal< 0){
		cout<< "Maximum circular subarray sum: "<< maxNormal;
		return 0;
	}
	
	int totalSum= 0;
	for(int i=0; i<n; i++){
		totalSum += arr[i];
	}
	
	int minSubarraySum= kadaneMin(arr, n);
	int maxCircular= totalSum- minSubarraySum;
	
	cout<< "Maximum circular subarray sum: "
	<< max(maxNormal, maxCircular);
	
	return 0;
}


