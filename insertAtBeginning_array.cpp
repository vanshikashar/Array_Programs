#include<iostream>
using namespace std;

int insertAtBeginning(int arr[], int n, int cap, int val){
	//check overflow
	if(n==cap){
		cout<< "Array is full\n";
		return n;
	}
	
	//shift elements to the right
	for(int i=n-1; i>=0; i--){
		arr[i+1]= arr[i];
	}
	
	//insert at beginning
	arr[0]= val;
	
	return n+1;  //new size
}

int main(){
	int cap;
	cout<< "Enter array capacity: ";
	cin>> cap;
	
	int arr[100];  //fixed max size 
	int n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	if(n> cap){
		cout<< "Invalid input\n";
			return 0;
	}
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int val;
	cout<< "Enter value to insert at beginning: ";
	cin>> val;
	
	n= insertAtBeginning(arr, n, cap, val);
	
	cout<< "Array after insertion:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<<" ";
		
	}
	
	return 0;
}
