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
	
	int minSoFar= arr[0];
	int maxDiff= arr[1]- arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[i]- minSoFar> maxDiff)
		   maxDiff= arr[i]- minSoFar;
		   
        if(arr[i]< minSoFar)
           minSoFar= arr[i];
	}
	
	cout<< "Maximum Difference: "<< maxDiff;
	
	return 0;
}
