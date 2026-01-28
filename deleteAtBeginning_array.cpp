#include<iostream>
using namespace std;

int deleteAtBeginning(int arr[], int n){
	if(n==0){
		cout<< "Array is empty\n";
		return n;
	}
	
	//shift elements to the left
	for(int i=1; i<n; i++){
		arr[i-1]= arr[i];
	}
	
	return n-1;   //new size
}

int main(){
	int arr[100];
	int n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	if(n<=0){
		cout<< "Invalid array size\n";
		return 0;
	}
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	n= deleteAtBeginning(arr, n);
	
	cout<< "Array after deletion at beginning:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
