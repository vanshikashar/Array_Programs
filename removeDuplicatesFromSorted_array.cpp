#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Index of next unique element
    int res = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < res; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

