// Problem: Check if an array is palinodrome or not. 
// Example: Input: arr[] = {3, 6, 0, 6, 3}
        // Output: Palindrome
        // Input: arr[] = {1, 2, 3, 4, 5}
        // Output: Not Palindrome

#include <iostream>
using namespace std;

int palinoArray (int arr[], int size) {
    int flag = 0;
    for (int i=0; i<=size/2 && size != 0; i++) {
        if (arr[i] != arr[size-i-1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        cout << "Not Palinodrome" << endl;
    }
    else {
        cout << "Is Palinodrome" << endl;
    }
    return 0;
}

int main() {
    int size, arr[100];
    cout << "Enter size of array: ";
    cin >> size;
    for ( int i=0; i<size; i++) {
        cout << " Value at index " << i+1 << " : ";
        cin >> arr[i]; 
    }
    cout << endl;
    palinoArray(arr, size);
    return 0;
}
