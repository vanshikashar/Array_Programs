#include<iostream>
using namespace std;

int deleteAtEnd(int n){
	// If array is empty, nothing to delete
	if(n==0){
		cout<< "Array is empty\n";
		return n;
	}
	
	// Simply reduce size
	return n-1;
}

int main(){
	int arr[100];
	int n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	if(n<0 || n>100){
		cout<< "Invalid size\n";
		return 0;
	}
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	n= deleteAtEnd(n);
	
	cout<< "Array after deletion at end:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	return 0;
}
