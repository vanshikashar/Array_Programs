#include<iostream>
using namespace std;

int deleteByValue(int arr[], int n, int value){
	//Find the index of the value
	int index= -1;
	for(int i=0; i<n; i++){
		if(arr[i]== value){
			index=i;
			break;
		}
	} 
	
	//if value not found
	if(index== -1){
		cout<< "Value not found\n";
		return n;
	}
	
	// shift elements to the left
	for(int i= index+1; i<n; i++){
		arr[i-1]=arr[i];
	}
	
	return n-1;   // new size
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
	
	int value;
	cout<< "Enter value to delete: ";
	cin>> value;
	
	n= deleteByValue(arr, n, value);
	
	cout<< "Array after deletion:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
