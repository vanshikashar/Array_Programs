#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
	while(start< end){
		int temp= arr[start];
		arr[start]= arr[end];
		arr[end]= temp;
		start++;
		end--; 
	}
}

int main(){
	int arr[100], n, d;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	cout<< "Enter D (number of rotations): ";
	cin>> d;
	
	d= d%n;  //handle d>n
	
	//step 1: reverse first d elements
	reverse(arr, 0, d-1);
	
	//step 2: reverse remaining elements
	reverse(arr, d, n-1);
	
	//step 3: reverse whole array
	reverse(arr, 0, n-1);
	
	cout<< "Array after left rotation by D places:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
