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
	
	//step 1: store first element
	int f= arr[0];
	
	//step 2: shift elements to the left
	for(int i=1; i<n; i++){
		arr[i-1]= arr[i];
	}
	
	//step 3: place first element at the end
	arr[n-1]= f;
	
	cout<< "Array after left rotation by one:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
