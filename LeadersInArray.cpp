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
	
	int maxFromRight= arr[n-1];
	
	cout<< "Leaders in the array:\n";
	cout<< maxFromRight << " ";
	
	for(int i=n-2; i>=0; i--){
		if(arr[i]>= maxFromRight){
			maxFromRight= arr[i];
			cout<< maxFromRight << " ";
		}
	}
	
	return 0;
}
