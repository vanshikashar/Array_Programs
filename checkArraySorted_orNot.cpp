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
	
	bool isSorted= true;
	
	for (int i=1; i<n; i++){
		if(arr[i]< arr[i-1]){
			isSorted= false;
			break;
		}
	}
	
	if(isSorted)
	   cout<< "Array is sorted";
    else
       cout<< "Array is not sorted";
       
    return 0;
}
