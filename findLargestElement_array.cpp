#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	if(n<=0 || n>100){
		cout<< "Invalid array size";
		return 0;
	}
	
	cout<< "Enter array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int largest= arr[0];
	
	for(int i= 1; i<n; i++){
		if(arr[i]> largest)
		   largest= arr[i];
	}
	
	cout<< "Largest element: "<< largest;
	
	return 0;
}
