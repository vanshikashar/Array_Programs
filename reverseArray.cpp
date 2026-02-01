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
	
	int low=0, high= n-1;
	
	while(low< high){
		int temp= arr[low];
		arr[low]= arr[high];
		arr[high]= temp;
		
		low++;
		high--;
	}
	
	cout<< "Reversed array:\n";
	for(int i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
	return 0;
}
