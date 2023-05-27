// Problem: Create an integer array and take input by user and find the position of 'target' key entered by user.
#include <algorithm>
#include <iostream>
using namespace std;

int FindUsingBinarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int mid = left + ((right-left)/2);

    while (left <= right) {
        if (arr[mid] == target) {
            cout << "\n'" << target << "' element is found at index " << mid << endl;
            exit(0);
        }
        else if (target > arr[mid]) {
            left = mid + 1;
        }
        // Condition of else: target < arr[mid]
        else {
            right = mid - 1;
        }
        mid = left + ((right-left)/2);
    }
    cout << "\n'" << target << "' element not found in an array! ";
    return 0;
}

int main() {
    int size, arr[100], target;
    cout << "Enter the size of an array : ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << " Value of an array at " << i+1 << " : ";
        cin >> arr[i];
    }
    sort(arr, arr + size);
    cout << "\n Enter the element to find in an array : ";
    cin >> target;
    FindUsingBinarySearch(arr, size, target);

    return 0;
}
