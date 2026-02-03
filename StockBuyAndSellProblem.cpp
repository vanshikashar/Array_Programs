#include<iostream>
using namespace std;

int main(){
	int arr[100], n;
	
	cout<< "Enter number of days: ";
	cin>> n;
	
	cout<< "Enter stock prices:\n";
	for(int i=0; i<n; i++){
		cin>> arr[i];
	}
	
	//case 1: one buy and one sell
	int minPrice= arr[0];
	int maxProfitOne= 0;
	
	for(int i=1; i<n; i++){
		if(arr[i]< minPrice)
		   minPrice= arr[i];
        else if(arr[i]- minPrice> maxProfitOne)
           maxProfitOne= arr[i]- minPrice;
	}
	
	//case 2: multiple buy and sell
	int maxProfitMultiple= 0;
	
	for( int i=1; i<n; i++){
		if(arr[i]> arr[i-1])
		   maxProfitMultiple +=arr[i]- arr[i-1];
	}
	
	cout<< "\nMaximum Profit (One Transaction): "<< maxProfitOne << endl;
	
	cout<< "Maximum Profit (Multiple Transactions): "<< maxProfitMultiple<< endl;
	
	return 0;
}
