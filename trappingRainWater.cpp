#include<iostream>
using namespace std;

int main(){
	int arr[100], n;
	
	cout<< "Enter number of bars: ";
	cin>> n;
	
	cout<< "Enter heights:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	int left=0, right= n-1;
	int leftMax=0, rightMax=0;
	int water=0;
	
	while(left<= right){
		if(arr[left]<= arr[right]){
			if(arr[left]>= leftMax)
			   leftMax= arr[left];
            else
               water+= leftMax- arr[left];
            left++;
		} else{
			if(arr[right]>= rightMax)
			   rightMax= arr[right];
            else
               water+= rightMax- arr[right];
            right--;
		}
	}
	
	cout<< "Total trapped rain water: "<< water;
	
	return 0;
}
