#include<iostream>
using namespace std;

int main(){
	int arr[100], n;
	cout<< "Enter number of elements: ";
	cin>> n;
	
	cout<< "Enter sorted array elements:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int freq= 1;
	
	for(int i=1; i<n; i++){
		if(arr[i]== arr[i-1]){
			freq++;
		} else {
			cout<< arr[i-1]<< "-> "<< freq<< endl;
			freq= 1;
		}
	}
	
	//print frequency of last element
	cout<< arr[n-1]<< "-> "<< freq<< endl;
	
	return 0;
}
