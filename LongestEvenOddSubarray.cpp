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
	
	int cl= 1;
	int ml= 1;
	
	for(int i=1; i<n; i++){
		//check alternating even-odd or 0dd-even
		if((arr[i]% 2== 0 && arr[i-1]% 2!= 0) || 
		(arr[i]% 2!=0 && arr[i-1]% 2== 0)){
			
			cl++;
			if(cl> ml)
			ml= cl;
		} else {
			cl= 1;
		}
	}
	
	cout<< "Length of longest even-odd subarray: "<< ml;
	
	return 0;
}
