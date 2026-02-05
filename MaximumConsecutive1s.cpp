#include<iostream>
using namespace std;

int main(){
	int arr[100], n;
	
	cout<< "Enter number of elements: ";
	cin>> n;
	
	cout<< "Enter binary array elements(0 or 1):\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int currentCount=0; 
	int maxCount=0;
	
	for(int i=0; i<n; i++){
		if(arr[i]== 1){
			currentCount++;
			if(currentCount> maxCount)
			   maxCount= currentCount;
		} else {
			currentCount=0;
		}
	}
	
	cout<< "Maximum consecutive 1s: "<< maxCount;
	
	return 0;

}
