// Problem: Given an array arr[] and an integer K, the task is to find the Kth smallest element in the given array.
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int size, arr[50], K, i;
    cout << "Enter size of array: ";
    cin >> size;

    if (size <= 1) {
        cout << "Invalid array size!\n";
    }
    else {
        // Input elements in array
        cout << "Enter the elements in array: ";
        for (i=0; i<size; i++) {
            cin >> arr[i];
        }

        // Displaying array
        cout << "\nYour array is: [";
        for (i=0; i<size; i++) {
            cout << arr[i] << ", ";
        }
        cout << "\b\b]";

        // Enter the index value of smallest element in the array or index value of K to find the smallest number in the array
        cout << "\nEnter the index value for smallest element in the array: ";
        cin >> K;

        // Sorted array
        cout << "\nSorted array: [";
        sort(arr, arr+size);
        for (i=0; i<size; i++) {
            cout << arr[i] << ", ";
        }
        cout << "\b\b]" ;

        // Value of Kth smallest element in the array
        cout << "\nThe " << K << " smallest element in the given array is " << arr[K-1] << endl;
    }
    return 0;
}
