#include<iostream>
using namespace std;

int deleteAtPos(int arr[], int n, int pos){
	//check if array is empty
	if(n==0){
		cout<< "Array is empty\n";
		return n;
	}
	
	//shift elements to the left
	for(int i= pos; i<n; i++){
		arr[i-1]= arr[i];
	}
	
	return n-1;  //new size
}

int main(){
	int arr[100];
	int n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	if(n<0 || n>100){
		cout<< "Invalid array size\n";
		return 0;
	}
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int pos;
	cout<< "Enter position to delete (1-based): ";
	cin>> pos;
	
	n= deleteAtPos(arr, n, pos);
	
	cout<< "Array after deletion:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
