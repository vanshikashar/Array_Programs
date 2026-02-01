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
	
	int count=0;  //index for non-zero elements
	
	//move non-zero elements forward
	for(int i=0; i<n; i++){
		if(arr[i]!= 0){
			arr[count]= arr[i];
			count++;
		}
	}
	
	//fill remaining position with zero
	while(count< n){
		arr[count]=0;
		count++;
	}
	
	cout<< "Array after moving zeroes to end:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
