#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && 
                 (secondLargest == -1 || arr[i] > secondLargest)) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1)
        cout << "Second largest element not found";
    else
        cout << "Second largest element: " << secondLargest;

    return 0;
}

