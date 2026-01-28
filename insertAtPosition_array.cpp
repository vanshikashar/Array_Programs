#include<iostream>
using namespace std;

int insertAtPosition(int arr[], int n, int cap, int pos, int val){
	//check overflow
	if(n==cap){
		cout<< "Array is full\n";
		return n;
	}
	
	//check valid position(1-based)
	if(pos<1 || pos>n+1){
		cout<< "Invalid position\n";
		return n;
	}
	
	//shift elements to the right
	for(int i=n-1; i>=pos-1; i--){
		arr[i+1]= arr[i];
	}
	
	//insert elements
	arr[pos-1]= val;
	
	return n+1;  //new size
}

int main(){
	int cap;
	cout<< "Enter array capacity: ";
	cin>> cap;
	
	int arr[100];//fixed size 
	int n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	if(n> cap){
		cout<< "Invalid input\n";
		return 0;
	}
	
	cout<<"Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int pos, val;
	cout<< "Enter position to insert (1-based): ";
	cin>> pos;
	
	cout<< "Enter value to insert: ";
	cin>> val;
	
	n= insertAtPosition(arr, n, cap, pos, val);
	
	cout<< "Array after insertion:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
